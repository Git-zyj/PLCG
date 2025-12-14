#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1496828960;
unsigned short var_3 = (unsigned short)28243;
unsigned short var_5 = (unsigned short)59341;
unsigned int var_7 = 2208833762U;
long long int var_8 = -6099002063214744690LL;
unsigned short var_9 = (unsigned short)9921;
int var_10 = 829275476;
int zero = 0;
unsigned int var_17 = 2182849559U;
unsigned int var_18 = 1060871681U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
