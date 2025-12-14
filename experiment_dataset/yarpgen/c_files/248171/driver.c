#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-21036;
unsigned short var_5 = (unsigned short)37548;
long long int var_16 = 9094779980547726670LL;
unsigned long long int var_17 = 6501263244285036608ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)36239;
unsigned int var_21 = 3450073382U;
void init() {
}

void checksum() {
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
