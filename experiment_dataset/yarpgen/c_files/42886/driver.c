#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20891;
unsigned short var_4 = (unsigned short)37480;
unsigned long long int var_6 = 6847799061068299474ULL;
int var_8 = 1531229215;
unsigned short var_9 = (unsigned short)52403;
int zero = 0;
unsigned int var_12 = 1340879542U;
short var_13 = (short)-18940;
long long int var_14 = 7791350519041937485LL;
unsigned char var_15 = (unsigned char)18;
unsigned short arr_2 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)46302;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
