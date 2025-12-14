#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-19073;
unsigned int var_4 = 948393241U;
_Bool var_5 = (_Bool)0;
unsigned long long int var_9 = 6801188287022617606ULL;
signed char var_11 = (signed char)91;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)233;
int zero = 0;
unsigned long long int var_15 = 4596325718360567851ULL;
unsigned int var_16 = 150639461U;
long long int var_17 = -2070422066148054425LL;
unsigned short var_18 = (unsigned short)19385;
unsigned int arr_2 [16] ;
_Bool arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 2659706232U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
