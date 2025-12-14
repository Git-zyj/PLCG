#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)55048;
short var_6 = (short)-23262;
unsigned short var_7 = (unsigned short)8099;
unsigned long long int var_15 = 15285343218070768289ULL;
long long int var_16 = -8289233011196940509LL;
int zero = 0;
unsigned long long int var_17 = 7131913406558354643ULL;
unsigned long long int var_18 = 784056019716563008ULL;
int var_19 = -1625356474;
unsigned short var_20 = (unsigned short)61603;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
