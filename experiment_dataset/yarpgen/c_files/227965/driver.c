#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2372359197U;
unsigned int var_6 = 3998603758U;
unsigned int var_8 = 1931752469U;
unsigned short var_9 = (unsigned short)42560;
unsigned int var_10 = 2467419315U;
unsigned int var_11 = 2391440517U;
int zero = 0;
unsigned int var_12 = 765982091U;
unsigned short var_13 = (unsigned short)36304;
void init() {
}

void checksum() {
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
