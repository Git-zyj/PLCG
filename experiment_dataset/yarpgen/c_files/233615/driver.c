#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4265213994U;
unsigned char var_5 = (unsigned char)248;
unsigned long long int var_8 = 17068989148815165920ULL;
int zero = 0;
unsigned int var_11 = 1283975079U;
unsigned int var_12 = 3729410818U;
unsigned char var_13 = (unsigned char)37;
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
