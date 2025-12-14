#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)155;
unsigned int var_2 = 1255743400U;
_Bool var_3 = (_Bool)1;
signed char var_6 = (signed char)-92;
unsigned long long int var_7 = 12615994661939378142ULL;
unsigned int var_10 = 2351678508U;
unsigned int var_11 = 2059336634U;
unsigned char var_12 = (unsigned char)55;
unsigned int var_13 = 2233661022U;
int zero = 0;
unsigned int var_14 = 3925500724U;
unsigned short var_15 = (unsigned short)65478;
short var_16 = (short)-12809;
int var_17 = 2094709030;
unsigned char var_18 = (unsigned char)193;
short arr_0 [15] [15] ;
_Bool arr_1 [15] [15] ;
unsigned char arr_2 [15] ;
unsigned char arr_3 [15] [15] ;
long long int arr_4 [15] ;
short arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (short)19064;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -6463511377129288164LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (short)6215;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
