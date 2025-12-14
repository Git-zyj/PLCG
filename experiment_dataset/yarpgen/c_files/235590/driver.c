#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19854;
unsigned short var_2 = (unsigned short)30160;
int var_5 = 1507602299;
long long int var_15 = -9096838060339390136LL;
int var_16 = -899387062;
int zero = 0;
short var_17 = (short)-31130;
unsigned long long int var_18 = 18055407883295064041ULL;
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
