#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)235;
unsigned long long int var_4 = 8408350829065085098ULL;
unsigned long long int var_5 = 12210136090788143302ULL;
short var_6 = (short)-2229;
unsigned char var_7 = (unsigned char)173;
unsigned char var_10 = (unsigned char)51;
unsigned int var_11 = 1971535276U;
int zero = 0;
unsigned short var_14 = (unsigned short)5983;
unsigned int var_15 = 1712262026U;
unsigned int var_16 = 2879406381U;
long long int var_17 = 7663841518794262680LL;
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
