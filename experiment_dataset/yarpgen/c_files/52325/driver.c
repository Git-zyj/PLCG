#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2901054594U;
int var_4 = -725420491;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)224;
short var_9 = (short)-20999;
unsigned short var_11 = (unsigned short)59435;
unsigned long long int var_13 = 17804047417285470971ULL;
unsigned int var_17 = 2315852277U;
short var_19 = (short)707;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 4124651016516704311ULL;
unsigned short var_22 = (unsigned short)39471;
int var_23 = -821448056;
unsigned short var_24 = (unsigned short)45880;
_Bool var_25 = (_Bool)1;
unsigned short arr_1 [14] ;
unsigned short arr_2 [14] [14] [14] ;
unsigned long long int arr_4 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)17415;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)57417;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 13041198216079122654ULL : 3796015999909936668ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
