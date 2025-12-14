#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2393201190U;
unsigned int var_7 = 2812630107U;
unsigned int var_8 = 239043572U;
int zero = 0;
unsigned char var_13 = (unsigned char)19;
unsigned int var_14 = 471327628U;
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
