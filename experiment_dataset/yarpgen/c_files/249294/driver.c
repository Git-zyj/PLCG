#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)22;
short var_8 = (short)-26761;
unsigned char var_11 = (unsigned char)105;
int zero = 0;
int var_16 = -102562914;
unsigned short var_17 = (unsigned short)2574;
long long int var_18 = 7972579100311847255LL;
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
