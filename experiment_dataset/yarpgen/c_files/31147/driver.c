#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)242;
unsigned int var_4 = 3661270309U;
signed char var_5 = (signed char)-102;
unsigned char var_10 = (unsigned char)234;
long long int var_12 = 6384389549949885708LL;
unsigned int var_13 = 756227156U;
unsigned int var_15 = 899127354U;
unsigned int var_16 = 3565624311U;
int zero = 0;
unsigned int var_17 = 3375851361U;
unsigned int var_18 = 2586940799U;
int var_19 = 917126064;
long long int var_20 = -849032403297134044LL;
unsigned char var_21 = (unsigned char)237;
signed char var_22 = (signed char)22;
int var_23 = 515628786;
signed char var_24 = (signed char)-8;
unsigned char arr_0 [20] ;
unsigned char arr_1 [20] ;
long long int arr_2 [20] ;
_Bool arr_5 [21] [21] ;
int arr_6 [21] [21] ;
_Bool arr_9 [20] ;
unsigned long long int arr_7 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 7236400927818449258LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = -306326384;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = 10264293537629764141ULL;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
