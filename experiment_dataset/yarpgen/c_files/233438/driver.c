#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9516145974717645536ULL;
unsigned long long int var_6 = 3554052133404965168ULL;
unsigned int var_7 = 108360448U;
int zero = 0;
unsigned long long int var_12 = 11515555888672089354ULL;
unsigned short var_13 = (unsigned short)2107;
unsigned char var_14 = (unsigned char)140;
unsigned char var_15 = (unsigned char)134;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1894720253U;
_Bool arr_3 [16] ;
long long int arr_11 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -3750592103078706428LL : -4759266968851802804LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
