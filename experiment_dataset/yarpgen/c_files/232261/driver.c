#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1967596635778261204ULL;
_Bool var_4 = (_Bool)1;
unsigned int var_10 = 1350344267U;
int var_12 = -845922195;
int zero = 0;
signed char var_15 = (signed char)32;
unsigned int var_16 = 3876122366U;
unsigned int var_17 = 2236099896U;
int var_18 = 1555005654;
long long int var_19 = -7036766186120412612LL;
_Bool var_20 = (_Bool)0;
unsigned int arr_3 [15] [15] ;
unsigned int arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 2699442208U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 2191224768U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
