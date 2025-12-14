#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)10625;
signed char var_3 = (signed char)48;
unsigned long long int var_4 = 11623078456829540247ULL;
long long int var_5 = -3711594203915814778LL;
unsigned short var_6 = (unsigned short)62648;
unsigned int var_8 = 914782184U;
int zero = 0;
unsigned short var_10 = (unsigned short)51183;
signed char var_11 = (signed char)80;
unsigned int var_12 = 561571720U;
unsigned char var_13 = (unsigned char)173;
signed char var_14 = (signed char)-101;
unsigned long long int arr_1 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 11277902686158510218ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
