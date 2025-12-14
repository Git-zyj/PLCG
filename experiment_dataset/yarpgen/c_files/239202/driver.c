#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3785;
unsigned long long int var_1 = 16685775225885142298ULL;
long long int var_2 = -6112331230031217037LL;
unsigned int var_3 = 3266936472U;
int var_5 = 79388790;
int var_7 = 901253128;
unsigned short var_9 = (unsigned short)56189;
unsigned long long int var_10 = 5286488165648716491ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)135;
long long int var_12 = -1003324891767961941LL;
signed char var_13 = (signed char)-20;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 11980582450749368151ULL;
short var_16 = (short)1915;
long long int arr_0 [24] ;
unsigned char arr_1 [24] [24] ;
unsigned int arr_2 [22] [22] ;
unsigned int arr_3 [22] [22] ;
short arr_5 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 8099840578652321592LL : -4352350501016962044LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 3887077100U : 2579463126U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 4269004041U : 1498068100U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-12382;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
