#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)150;
short var_3 = (short)-7642;
int var_5 = -235323615;
short var_6 = (short)27941;
int var_7 = 290702574;
short var_8 = (short)829;
unsigned short var_11 = (unsigned short)46265;
int zero = 0;
unsigned int var_14 = 491514902U;
short var_15 = (short)-31711;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-30393;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
