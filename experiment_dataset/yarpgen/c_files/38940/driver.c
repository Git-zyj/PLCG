#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 4353372229875937172ULL;
unsigned char var_9 = (unsigned char)163;
int var_10 = 2007656578;
short var_11 = (short)28790;
short var_12 = (short)-24871;
unsigned int var_13 = 4045173611U;
unsigned long long int var_15 = 1475487893228423632ULL;
unsigned short var_16 = (unsigned short)59666;
int zero = 0;
short var_17 = (short)14923;
signed char var_18 = (signed char)-73;
short var_19 = (short)8753;
unsigned int var_20 = 2193796256U;
unsigned int var_21 = 597604243U;
int var_22 = -1803377820;
signed char var_23 = (signed char)92;
unsigned short var_24 = (unsigned short)57436;
_Bool var_25 = (_Bool)1;
unsigned int arr_1 [23] ;
unsigned long long int arr_2 [23] ;
signed char arr_3 [23] [23] ;
_Bool arr_6 [23] [23] ;
unsigned char arr_13 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 2754490472U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 17714230566333145147ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned char)211;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
