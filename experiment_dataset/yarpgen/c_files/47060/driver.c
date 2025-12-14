#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55671;
short var_1 = (short)19059;
unsigned short var_8 = (unsigned short)3652;
unsigned int var_11 = 3300781187U;
unsigned int var_17 = 229821476U;
int zero = 0;
unsigned long long int var_18 = 13186969189915133819ULL;
short var_19 = (short)-19472;
int var_20 = 1906068400;
void init() {
}

void checksum() {
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
