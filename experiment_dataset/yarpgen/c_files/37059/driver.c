#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)6085;
short var_9 = (short)-15532;
long long int var_11 = -2699632278771647494LL;
unsigned char var_13 = (unsigned char)113;
int zero = 0;
unsigned char var_14 = (unsigned char)120;
short var_15 = (short)3738;
unsigned long long int var_16 = 5115895436715892789ULL;
unsigned long long int var_17 = 4730397856346260993ULL;
unsigned long long int var_18 = 14867879010667428411ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
