#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7202098020140520058LL;
short var_5 = (short)-7506;
short var_7 = (short)11941;
long long int var_8 = 145937978426625079LL;
unsigned short var_9 = (unsigned short)5922;
unsigned short var_11 = (unsigned short)36080;
unsigned char var_13 = (unsigned char)190;
int zero = 0;
unsigned char var_15 = (unsigned char)95;
signed char var_16 = (signed char)14;
unsigned char var_17 = (unsigned char)147;
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
