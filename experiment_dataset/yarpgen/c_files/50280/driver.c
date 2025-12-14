#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1534335300;
unsigned int var_5 = 2428347234U;
unsigned char var_7 = (unsigned char)113;
int zero = 0;
short var_14 = (short)-6544;
int var_15 = -857899065;
unsigned short var_16 = (unsigned short)15621;
unsigned char var_17 = (unsigned char)247;
long long int var_18 = 2139858172108801696LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
