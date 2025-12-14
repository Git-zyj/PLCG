#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-22542;
unsigned int var_11 = 3510022770U;
unsigned short var_12 = (unsigned short)6369;
unsigned char var_13 = (unsigned char)91;
int zero = 0;
long long int var_19 = -2402289319197868408LL;
signed char var_20 = (signed char)79;
unsigned short var_21 = (unsigned short)22604;
signed char var_22 = (signed char)-63;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
