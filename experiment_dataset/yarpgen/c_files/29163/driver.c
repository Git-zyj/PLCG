#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-9556;
short var_8 = (short)-4130;
unsigned int var_9 = 2421025598U;
int var_10 = 641340558;
short var_11 = (short)-7827;
int zero = 0;
short var_15 = (short)-28934;
unsigned long long int var_16 = 12791796011521614814ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
