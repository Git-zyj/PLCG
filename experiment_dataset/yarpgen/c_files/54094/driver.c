#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 456658398;
unsigned char var_4 = (unsigned char)171;
unsigned int var_5 = 53090591U;
long long int var_6 = -1266284927738592401LL;
unsigned short var_8 = (unsigned short)57269;
short var_11 = (short)-28634;
int var_13 = -263790584;
unsigned char var_14 = (unsigned char)244;
int zero = 0;
long long int var_16 = -1478981889974309952LL;
long long int var_17 = 441300000824943342LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
