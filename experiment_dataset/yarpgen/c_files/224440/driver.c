#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)8921;
unsigned int var_8 = 3394460306U;
unsigned short var_10 = (unsigned short)55636;
unsigned long long int var_11 = 16038245517019542790ULL;
int zero = 0;
int var_13 = 1808468041;
long long int var_14 = 3371195753142026879LL;
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
