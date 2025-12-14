#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17563;
short var_2 = (short)-18681;
unsigned long long int var_6 = 11303690036242669196ULL;
long long int var_7 = 1440485399222276878LL;
long long int var_9 = -4565051116327143152LL;
unsigned char var_11 = (unsigned char)138;
unsigned char var_12 = (unsigned char)212;
long long int var_13 = 5574037561673216280LL;
short var_15 = (short)-26529;
unsigned short var_17 = (unsigned short)61556;
unsigned long long int var_19 = 10187721637156999238ULL;
int zero = 0;
long long int var_20 = -6606804140022903470LL;
unsigned int var_21 = 1617297033U;
unsigned long long int var_22 = 9811852105011721364ULL;
_Bool var_23 = (_Bool)0;
unsigned int arr_0 [16] ;
long long int arr_1 [16] [16] ;
unsigned char arr_3 [16] ;
short arr_4 [16] ;
unsigned char arr_5 [16] [16] [16] ;
unsigned char arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 944437563U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 5311796450193342404LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (short)15930;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned char)140;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
