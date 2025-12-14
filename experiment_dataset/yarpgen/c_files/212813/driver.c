#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12637;
unsigned long long int var_3 = 10172737675099535417ULL;
unsigned long long int var_11 = 17395524021983217224ULL;
int zero = 0;
unsigned int var_16 = 2960199914U;
int var_17 = -652411635;
unsigned long long int var_18 = 1335970949199556971ULL;
_Bool var_19 = (_Bool)1;
unsigned long long int arr_0 [23] [23] ;
unsigned long long int arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 11312074642950624729ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 9164776616965012411ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
