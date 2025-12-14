#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6250158575910560435LL;
int var_1 = -999927170;
unsigned long long int var_5 = 4944603846142842222ULL;
long long int var_8 = 3045283128911187595LL;
int var_9 = -151900343;
short var_10 = (short)15444;
int zero = 0;
short var_11 = (short)-13747;
int var_12 = 1886773386;
short var_13 = (short)3231;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
