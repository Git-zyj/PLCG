#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11872574352707240871ULL;
unsigned char var_1 = (unsigned char)152;
short var_7 = (short)30754;
unsigned long long int var_10 = 6602477498140674039ULL;
int zero = 0;
long long int var_13 = 7321549507988673866LL;
short var_14 = (short)-9470;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
