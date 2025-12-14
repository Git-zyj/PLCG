#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 8370825508493398173ULL;
unsigned long long int var_8 = 11176036369561993979ULL;
int zero = 0;
unsigned int var_17 = 1872969522U;
unsigned short var_18 = (unsigned short)42949;
unsigned short var_19 = (unsigned short)44323;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
