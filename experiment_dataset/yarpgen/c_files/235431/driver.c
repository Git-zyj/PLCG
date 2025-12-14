#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13932318749594773640ULL;
unsigned short var_7 = (unsigned short)28710;
unsigned long long int var_8 = 14443786727786765258ULL;
unsigned long long int var_10 = 2229648304260251850ULL;
unsigned short var_12 = (unsigned short)7115;
unsigned short var_15 = (unsigned short)42198;
int zero = 0;
long long int var_16 = -7805456183628993711LL;
short var_17 = (short)-29125;
void init() {
}

void checksum() {
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
