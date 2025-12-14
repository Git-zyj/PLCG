#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1510172424;
unsigned char var_7 = (unsigned char)71;
int var_10 = 586333214;
int zero = 0;
unsigned int var_16 = 894590518U;
int var_17 = -1957091666;
unsigned short var_18 = (unsigned short)26059;
void init() {
}

void checksum() {
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
