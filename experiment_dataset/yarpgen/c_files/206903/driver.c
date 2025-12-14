#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8625918869390370566LL;
long long int var_1 = 4116837517649683438LL;
unsigned char var_2 = (unsigned char)3;
unsigned long long int var_4 = 8513064582502660393ULL;
unsigned short var_5 = (unsigned short)48710;
long long int var_6 = 1016071086608731257LL;
int var_9 = 1739057086;
int zero = 0;
unsigned int var_10 = 3293085515U;
unsigned short var_11 = (unsigned short)50803;
int var_12 = 345927244;
unsigned int var_13 = 3183369612U;
unsigned short var_14 = (unsigned short)60119;
unsigned short var_15 = (unsigned short)16562;
unsigned char arr_0 [12] [12] ;
unsigned char arr_1 [12] ;
unsigned char arr_2 [12] [12] ;
_Bool arr_4 [25] ;
int arr_5 [25] ;
long long int arr_8 [10] [10] ;
_Bool arr_3 [12] ;
unsigned short arr_6 [25] ;
short arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = -764980205;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = -1663745049322663191LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (unsigned short)34171;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (short)-1573;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
