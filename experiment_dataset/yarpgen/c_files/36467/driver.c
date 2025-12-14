#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3643644907U;
int var_2 = 2011645988;
unsigned int var_3 = 1226157638U;
unsigned long long int var_4 = 8820959849236212985ULL;
unsigned char var_5 = (unsigned char)128;
signed char var_7 = (signed char)-113;
unsigned int var_9 = 570023879U;
int zero = 0;
int var_11 = 571862805;
short var_12 = (short)-23792;
unsigned int var_13 = 367306653U;
unsigned int var_14 = 1353907601U;
unsigned char var_15 = (unsigned char)213;
unsigned char var_16 = (unsigned char)44;
short arr_0 [18] ;
unsigned char arr_1 [18] ;
int arr_2 [18] [18] [18] ;
long long int arr_4 [18] ;
unsigned long long int arr_7 [18] ;
unsigned int arr_9 [18] ;
unsigned char arr_11 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)17861;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -472445347;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -1271293493135837993LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 1701920145706078286ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = 3205235156U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)218 : (unsigned char)153;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
