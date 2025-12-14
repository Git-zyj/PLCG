#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 10945904200315040892ULL;
short var_10 = (short)-8288;
unsigned short var_13 = (unsigned short)53831;
unsigned long long int var_14 = 12411258335895261459ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)128;
unsigned short var_16 = (unsigned short)42933;
int var_17 = 591867228;
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
