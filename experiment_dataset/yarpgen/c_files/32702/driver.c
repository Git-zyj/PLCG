#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1086200118;
unsigned long long int var_2 = 9398821165605744976ULL;
unsigned char var_3 = (unsigned char)221;
short var_5 = (short)-31193;
short var_6 = (short)-5291;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 11412238392324239237ULL;
int var_10 = 1954262954;
int var_12 = -14403977;
int zero = 0;
int var_14 = -2007423817;
short var_15 = (short)17601;
unsigned short var_16 = (unsigned short)42736;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 13038260300362719455ULL;
_Bool var_19 = (_Bool)1;
short var_20 = (short)7287;
int arr_0 [13] ;
unsigned int arr_1 [13] [13] ;
unsigned short arr_5 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -285508133;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 1997056179U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)36218 : (unsigned short)47200;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
