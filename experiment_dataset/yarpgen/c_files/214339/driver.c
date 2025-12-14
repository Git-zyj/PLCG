#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3817013274U;
unsigned long long int var_6 = 6354757343367320886ULL;
unsigned long long int var_7 = 4003129726525047296ULL;
_Bool var_9 = (_Bool)0;
long long int var_12 = 8831337634308748697LL;
int zero = 0;
long long int var_14 = -4374872334667516866LL;
long long int var_15 = 1387135666697735745LL;
unsigned long long int var_16 = 1040823597650939041ULL;
unsigned int arr_2 [16] ;
short arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 2892120752U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (short)28298;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
