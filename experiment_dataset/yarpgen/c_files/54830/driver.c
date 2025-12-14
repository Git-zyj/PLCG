#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)7191;
unsigned int var_2 = 2848040534U;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)225;
_Bool var_5 = (_Bool)0;
unsigned char var_8 = (unsigned char)34;
short var_9 = (short)-23503;
unsigned char var_10 = (unsigned char)233;
unsigned int var_11 = 1242822211U;
short var_12 = (short)24317;
unsigned short var_13 = (unsigned short)53309;
unsigned long long int var_14 = 9312247305510000107ULL;
unsigned short var_15 = (unsigned short)61191;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)14259;
short var_20 = (short)-25256;
unsigned int var_21 = 3529360320U;
_Bool var_22 = (_Bool)0;
short arr_0 [23] ;
short arr_1 [23] [23] ;
signed char arr_2 [23] [23] [23] ;
unsigned char arr_3 [23] [23] ;
short arr_4 [23] ;
signed char arr_5 [23] ;
_Bool arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)-29268;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-32199;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (short)-24346;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
