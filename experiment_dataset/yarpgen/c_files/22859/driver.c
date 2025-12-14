#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)52939;
signed char var_3 = (signed char)-32;
unsigned long long int var_4 = 7753941909097617589ULL;
long long int var_5 = 3347594044486629540LL;
int var_6 = 1846996421;
signed char var_7 = (signed char)-66;
int var_8 = 411944626;
unsigned int var_9 = 344203082U;
short var_10 = (short)-2997;
unsigned int var_12 = 2547027030U;
long long int var_14 = 3639362204623784455LL;
int zero = 0;
unsigned long long int var_20 = 1096104485285151137ULL;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)63628;
_Bool var_23 = (_Bool)0;
short var_24 = (short)16056;
short var_25 = (short)-27946;
unsigned long long int var_26 = 13673108390985057065ULL;
int arr_0 [11] [11] ;
signed char arr_1 [11] ;
_Bool arr_2 [11] [11] ;
unsigned char arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = -1099216883;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned char)23;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
