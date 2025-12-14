#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46516;
unsigned long long int var_3 = 2356622935529313384ULL;
unsigned long long int var_5 = 10596861781852131798ULL;
unsigned int var_6 = 2289312059U;
unsigned long long int var_7 = 15199422859735218736ULL;
unsigned short var_8 = (unsigned short)36056;
long long int var_9 = 3135005479950743731LL;
short var_11 = (short)-21651;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2702159783U;
int zero = 0;
short var_14 = (short)24330;
long long int var_15 = -3670218526633617501LL;
long long int var_16 = 1069434466877178821LL;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 10263755829277106240ULL;
short var_19 = (short)-30098;
long long int var_20 = -229980869113941656LL;
short var_21 = (short)-9692;
signed char var_22 = (signed char)-25;
unsigned long long int arr_4 [23] ;
_Bool arr_5 [23] [23] ;
_Bool arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 8530543050036711495ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
