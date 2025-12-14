#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 10843506884235537765ULL;
long long int var_4 = 2177474921651609857LL;
_Bool var_7 = (_Bool)1;
int var_8 = 260746929;
unsigned char var_10 = (unsigned char)53;
long long int var_11 = -336919112410066089LL;
int var_12 = -1831760940;
int zero = 0;
unsigned char var_15 = (unsigned char)33;
_Bool var_16 = (_Bool)1;
int var_17 = 1662518936;
unsigned int var_18 = 976762918U;
unsigned int var_19 = 3332363834U;
unsigned char var_20 = (unsigned char)161;
unsigned char var_21 = (unsigned char)67;
unsigned char var_22 = (unsigned char)92;
int arr_1 [19] ;
unsigned char arr_2 [19] ;
long long int arr_6 [19] ;
long long int arr_10 [19] ;
signed char arr_13 [19] ;
long long int arr_3 [19] ;
short arr_11 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -608901156;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 1295068582288460324LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = 4668133157808583382LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (signed char)-92;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -5510068763603834110LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_11 [i_0] [i_1] = (short)4746;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
