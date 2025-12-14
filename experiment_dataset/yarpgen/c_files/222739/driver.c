#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)13758;
unsigned char var_12 = (unsigned char)224;
unsigned int var_16 = 1091573616U;
short var_18 = (short)-26772;
int zero = 0;
unsigned short var_19 = (unsigned short)23740;
short var_20 = (short)28446;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
