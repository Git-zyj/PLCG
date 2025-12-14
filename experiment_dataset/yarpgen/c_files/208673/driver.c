#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5293078339982869644ULL;
unsigned int var_5 = 2420462138U;
unsigned char var_7 = (unsigned char)234;
int zero = 0;
unsigned int var_10 = 2109999895U;
unsigned int var_11 = 2559478916U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
