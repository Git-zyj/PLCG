#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)3636;
short var_10 = (short)-4930;
unsigned long long int var_14 = 10604136388216018818ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)16746;
int var_20 = -1165136546;
unsigned int var_21 = 1134955654U;
unsigned long long int var_22 = 16918229061231381418ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
