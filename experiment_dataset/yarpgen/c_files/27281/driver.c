#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4844491546500555612ULL;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-19093;
unsigned char var_4 = (unsigned char)196;
signed char var_5 = (signed char)-120;
long long int var_6 = 8713071791043469106LL;
unsigned short var_7 = (unsigned short)31597;
unsigned short var_8 = (unsigned short)31383;
int var_9 = -2057184166;
_Bool var_10 = (_Bool)0;
short var_11 = (short)23336;
int zero = 0;
short var_12 = (short)26722;
int var_13 = -933758133;
unsigned char var_14 = (unsigned char)101;
unsigned char var_15 = (unsigned char)224;
unsigned int var_16 = 1941995903U;
unsigned long long int arr_0 [16] ;
unsigned char arr_8 [23] ;
short arr_10 [23] ;
short arr_6 [16] [16] ;
unsigned short arr_14 [23] [23] ;
unsigned short arr_15 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 13393730728409145859ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (unsigned char)59;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (short)-4352;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-18145;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)20883 : (unsigned short)14582;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)35025 : (unsigned short)45913;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
