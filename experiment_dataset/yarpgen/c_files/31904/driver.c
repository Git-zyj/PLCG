#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)45607;
int var_8 = 668263097;
int var_11 = -1743863293;
int var_14 = 1129259475;
short var_15 = (short)14185;
unsigned long long int var_17 = 12667411877252226530ULL;
int zero = 0;
short var_18 = (short)14526;
unsigned int var_19 = 459317313U;
void init() {
}

void checksum() {
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
