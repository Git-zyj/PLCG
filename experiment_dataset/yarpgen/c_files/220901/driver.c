#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16594;
short var_2 = (short)-31032;
unsigned long long int var_5 = 12872895110941477917ULL;
unsigned short var_8 = (unsigned short)28498;
int zero = 0;
unsigned int var_10 = 1509725841U;
short var_11 = (short)29404;
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
