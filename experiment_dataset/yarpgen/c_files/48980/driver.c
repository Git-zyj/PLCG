#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)109;
int var_5 = 946311511;
short var_6 = (short)10659;
unsigned short var_11 = (unsigned short)25725;
int zero = 0;
unsigned long long int var_12 = 14605558494187265772ULL;
unsigned int var_13 = 197756557U;
unsigned short var_14 = (unsigned short)1660;
short var_15 = (short)-30842;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
