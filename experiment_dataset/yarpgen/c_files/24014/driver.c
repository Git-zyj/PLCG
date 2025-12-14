#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-6480;
unsigned long long int var_7 = 11810018056427582326ULL;
unsigned int var_11 = 1022852703U;
unsigned int var_15 = 2773534627U;
unsigned char var_16 = (unsigned char)46;
int zero = 0;
short var_17 = (short)16447;
unsigned char var_18 = (unsigned char)69;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
