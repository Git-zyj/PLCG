#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7661118997970969404ULL;
unsigned short var_2 = (unsigned short)1496;
short var_12 = (short)-11338;
int zero = 0;
unsigned long long int var_20 = 12693048563392663314ULL;
short var_21 = (short)15286;
short var_22 = (short)11548;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
