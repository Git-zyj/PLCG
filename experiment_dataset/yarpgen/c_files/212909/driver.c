#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2844;
short var_1 = (short)17300;
unsigned short var_3 = (unsigned short)3397;
unsigned short var_12 = (unsigned short)51712;
unsigned int var_13 = 116716008U;
int zero = 0;
unsigned int var_14 = 1626704103U;
unsigned long long int var_15 = 3032763553881074705ULL;
void init() {
}

void checksum() {
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
