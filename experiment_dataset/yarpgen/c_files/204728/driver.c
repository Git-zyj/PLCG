#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3815964847121394858ULL;
unsigned int var_9 = 1413107283U;
int zero = 0;
unsigned long long int var_19 = 8844096675340996259ULL;
unsigned long long int var_20 = 12656529551166870575ULL;
short var_21 = (short)24136;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
