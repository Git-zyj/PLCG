#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 146187468U;
unsigned short var_1 = (unsigned short)23877;
long long int var_2 = 8640474673760540874LL;
unsigned int var_3 = 3862176082U;
unsigned int var_6 = 1284118664U;
unsigned short var_8 = (unsigned short)54719;
signed char var_9 = (signed char)-96;
unsigned long long int var_10 = 11063235435195702524ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)65;
unsigned long long int var_12 = 2747512913399126802ULL;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)45651;
signed char var_15 = (signed char)-124;
unsigned long long int var_16 = 17672958654211788279ULL;
long long int var_17 = -3832680576515003633LL;
signed char var_18 = (signed char)86;
unsigned short var_19 = (unsigned short)53417;
unsigned long long int var_20 = 4724264014672815061ULL;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-66;
unsigned int arr_0 [20] ;
int arr_1 [20] ;
signed char arr_2 [20] ;
unsigned long long int arr_4 [10] ;
signed char arr_11 [19] ;
unsigned long long int arr_13 [20] ;
_Bool arr_14 [20] [20] ;
int arr_15 [20] ;
unsigned long long int arr_12 [19] [19] ;
unsigned short arr_16 [20] ;
unsigned int arr_17 [20] [20] ;
unsigned long long int arr_18 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 2744800069U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -549183752;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 15579933724069764480ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (signed char)-88;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = 1606562155391354683ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = -666766506;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = 9853668755254388830ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = (unsigned short)17046;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_17 [i_0] [i_1] = 4251561302U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_18 [i_0] [i_1] = 9322780052271504051ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
