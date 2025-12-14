#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1101568270U;
unsigned char var_3 = (unsigned char)88;
unsigned int var_4 = 2111373710U;
unsigned long long int var_7 = 17371462091309360069ULL;
int zero = 0;
unsigned int var_13 = 1350554416U;
unsigned char var_14 = (unsigned char)76;
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
