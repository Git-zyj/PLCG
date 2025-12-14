#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60201;
signed char var_3 = (signed char)73;
unsigned long long int var_4 = 15603414514659219408ULL;
int var_5 = -448435362;
long long int var_6 = -8781803869386085762LL;
unsigned long long int var_9 = 11064707545065500722ULL;
unsigned short var_12 = (unsigned short)19498;
int zero = 0;
int var_15 = 182552836;
long long int var_16 = 6777729036182948725LL;
unsigned int var_17 = 2754826123U;
long long int var_18 = -791476823284323357LL;
signed char var_19 = (signed char)97;
unsigned long long int var_20 = 7752814254590983438ULL;
long long int var_21 = -4202392132830500715LL;
long long int var_22 = 1924159706661621826LL;
unsigned long long int var_23 = 13738243905535423660ULL;
unsigned char var_24 = (unsigned char)109;
int var_25 = -745458287;
long long int arr_0 [23] ;
unsigned short arr_1 [23] ;
_Bool arr_3 [20] ;
_Bool arr_4 [20] [20] ;
unsigned char arr_9 [22] [22] ;
long long int arr_16 [22] [22] ;
unsigned int arr_22 [22] ;
unsigned short arr_7 [20] [20] ;
long long int arr_10 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 3778192652572686366LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)47911;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? -7341675389878452940LL : -2774127372886091444LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 940305731U : 276403130U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)3400;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 6656490812346055971LL : -5407837258248002729LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
