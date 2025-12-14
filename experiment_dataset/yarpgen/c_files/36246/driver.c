#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)87;
int var_4 = -1312704393;
unsigned long long int var_6 = 6590907847435725862ULL;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)101;
_Bool var_12 = (_Bool)0;
int var_14 = 339548602;
short var_15 = (short)6256;
int zero = 0;
int var_16 = -1047204321;
int var_17 = -596153424;
short var_18 = (short)21937;
unsigned char var_19 = (unsigned char)199;
void init() {
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
