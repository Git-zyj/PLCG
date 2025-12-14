#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 5447111696062076039ULL;
unsigned int var_8 = 3138432255U;
unsigned char var_10 = (unsigned char)4;
unsigned short var_12 = (unsigned short)779;
short var_17 = (short)19032;
int zero = 0;
short var_18 = (short)-17981;
unsigned short var_19 = (unsigned short)7326;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
