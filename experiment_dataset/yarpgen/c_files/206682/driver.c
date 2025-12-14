#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)23456;
unsigned short var_13 = (unsigned short)10944;
long long int var_14 = 1744614194303581807LL;
int zero = 0;
unsigned int var_18 = 1234285488U;
unsigned char var_19 = (unsigned char)160;
void init() {
}

void checksum() {
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
