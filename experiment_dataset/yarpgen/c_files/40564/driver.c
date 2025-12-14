#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)10901;
unsigned char var_8 = (unsigned char)15;
int zero = 0;
unsigned long long int var_15 = 2103979664315125462ULL;
short var_16 = (short)-1972;
unsigned long long int var_17 = 39090954921046323ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
