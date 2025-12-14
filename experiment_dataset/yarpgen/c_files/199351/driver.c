#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1882;
short var_4 = (short)-17250;
unsigned long long int var_17 = 15464801839045649094ULL;
int zero = 0;
unsigned int var_18 = 920429715U;
long long int var_19 = -6007709778008565295LL;
long long int var_20 = -6909387649287699455LL;
unsigned int arr_1 [19] [19] ;
long long int arr_8 [19] ;
short arr_11 [19] ;
long long int arr_6 [19] [19] ;
unsigned char arr_12 [19] ;
long long int arr_13 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 3311939048U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 4421996080866890758LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (short)7435;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = -6280064640785781373LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = -6187441129261463061LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
