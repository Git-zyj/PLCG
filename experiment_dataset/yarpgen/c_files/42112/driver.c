#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)55813;
unsigned long long int var_8 = 6215443208906467994ULL;
unsigned short var_9 = (unsigned short)13356;
int zero = 0;
unsigned short var_10 = (unsigned short)10650;
unsigned int var_11 = 2654864404U;
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
