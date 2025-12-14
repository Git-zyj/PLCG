#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 375181751U;
unsigned int var_2 = 1444852792U;
unsigned short var_4 = (unsigned short)6762;
unsigned int var_5 = 1840010285U;
int zero = 0;
unsigned int var_10 = 929072514U;
unsigned long long int var_11 = 2932482766194505998ULL;
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
