#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)46;
unsigned long long int var_1 = 15232725278474316603ULL;
unsigned short var_4 = (unsigned short)10965;
unsigned int var_5 = 4275556252U;
unsigned int var_6 = 374085011U;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-16;
int zero = 0;
signed char var_13 = (signed char)70;
long long int var_14 = 2613941671285532128LL;
unsigned long long int var_15 = 7788737612011660809ULL;
unsigned int var_16 = 4064842770U;
signed char var_17 = (signed char)-100;
unsigned long long int var_18 = 7133503457669104812ULL;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-106;
long long int var_21 = 2351032702380013749LL;
unsigned int var_22 = 1224342864U;
long long int arr_1 [16] ;
unsigned char arr_2 [16] [16] ;
unsigned long long int arr_6 [22] [22] ;
unsigned short arr_12 [20] ;
_Bool arr_13 [20] ;
unsigned long long int arr_3 [16] [16] ;
unsigned int arr_4 [16] ;
_Bool arr_5 [16] ;
unsigned short arr_10 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -2981414453670612507LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = 12953693581506211853ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (unsigned short)54955;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 11175825299446065411ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 2671093926U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (unsigned short)22560;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
