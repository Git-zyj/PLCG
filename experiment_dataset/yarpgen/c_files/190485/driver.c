#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1961937653;
short var_3 = (short)8506;
unsigned short var_4 = (unsigned short)25176;
short var_12 = (short)-1362;
int zero = 0;
unsigned char var_13 = (unsigned char)171;
unsigned char var_14 = (unsigned char)42;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
