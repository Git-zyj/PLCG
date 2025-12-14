#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16081;
unsigned int var_1 = 2950000771U;
unsigned long long int var_2 = 9545177498098692828ULL;
unsigned short var_4 = (unsigned short)34191;
unsigned int var_5 = 2574316184U;
short var_6 = (short)-14210;
unsigned int var_8 = 298221724U;
long long int var_9 = -2171786631700869964LL;
unsigned long long int var_10 = 1038572162874063940ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)9584;
unsigned int var_12 = 692262142U;
long long int var_13 = -4176521269914556139LL;
short var_14 = (short)-5975;
unsigned short arr_3 [10] ;
unsigned short arr_8 [11] ;
unsigned int arr_9 [11] [11] ;
unsigned short arr_12 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned short)5522;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (unsigned short)3120;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = 4148517206U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (unsigned short)2796;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
