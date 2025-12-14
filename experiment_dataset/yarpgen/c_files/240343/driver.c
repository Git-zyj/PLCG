#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)1948;
long long int var_7 = 2224451727058562558LL;
int var_8 = -1699944289;
short var_9 = (short)19462;
unsigned char var_10 = (unsigned char)79;
_Bool var_11 = (_Bool)1;
long long int var_13 = -4324294608622926415LL;
unsigned long long int var_15 = 14582054536572096586ULL;
unsigned char var_16 = (unsigned char)72;
int zero = 0;
unsigned long long int var_17 = 11217372551892073936ULL;
unsigned long long int var_18 = 13311716486366914429ULL;
unsigned char var_19 = (unsigned char)78;
unsigned long long int var_20 = 14830064470789485803ULL;
unsigned long long int var_21 = 6407552230108307099ULL;
unsigned char var_22 = (unsigned char)35;
long long int var_23 = 7947541139323847757LL;
int arr_0 [16] ;
_Bool arr_3 [16] [16] [16] ;
_Bool arr_7 [19] [19] ;
unsigned short arr_8 [19] [19] ;
unsigned long long int arr_4 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -1060178234;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)30757;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 14620913577049601061ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
