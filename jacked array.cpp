#include<iostream>
using namespace std;
int main()
{
	int row, col; 
	int **ptr, *backup;
	cout << "Enter rows: ";
	cin >> row;
	ptr = new int *[row];
	backup = new int[row];
	for (int i = 0; i < row; i++)
	{
		cout << "Enter columns: ";
		cin >> col;
		ptr[i] = new int[col];
		backup[i] = col;
		for (int j = 0; j < col; j++)
		{
			cin >> ptr[i][j];
		}
	}
	cout << endl;
	cout<<"The output of Jacked array is: " << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < backup[i]; j++)
		{
			cout << ptr[i][j];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

