#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2263030247U;
unsigned short var_1 = (unsigned short)37867;
signed char var_3 = (signed char)17;
unsigned char var_4 = (unsigned char)143;
long long int var_5 = 2486403958326106666LL;
unsigned int var_6 = 131084725U;
long long int var_7 = 8932814632669319465LL;
_Bool var_8 = (_Bool)1;
int zero = 0;
short var_10 = (short)2357;
unsigned short var_11 = (unsigned short)24131;
long long int var_12 = -8726671022388798356LL;
unsigned short var_13 = (unsigned short)24645;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)15510;
signed char var_16 = (signed char)86;
unsigned int var_17 = 2784238436U;
long long int arr_0 [23] ;
unsigned long long int arr_1 [23] ;
int arr_3 [19] ;
unsigned int arr_4 [19] [19] ;
short arr_2 [23] ;
unsigned long long int arr_9 [14] ;
unsigned int arr_10 [14] ;
unsigned long long int arr_11 [14] ;
unsigned int arr_14 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 1660197457041511773LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 8292348457497385747ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -1518530560;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 894437159U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)29783;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = 2446003318953702493ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = 2154218928U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = 5836410908178891337ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_14 [i_0] [i_1] = 4181087813U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
