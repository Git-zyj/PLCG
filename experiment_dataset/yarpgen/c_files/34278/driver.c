#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16473;
int var_5 = -1736495981;
int var_8 = 728742648;
signed char var_12 = (signed char)-102;
int zero = 0;
unsigned int var_13 = 1283421477U;
int var_14 = 1647918512;
int var_15 = -2041045727;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
