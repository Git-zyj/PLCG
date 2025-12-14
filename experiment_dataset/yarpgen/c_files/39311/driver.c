#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)26345;
short var_7 = (short)28940;
short var_14 = (short)-24940;
int zero = 0;
unsigned short var_15 = (unsigned short)21344;
unsigned short var_16 = (unsigned short)11784;
int var_17 = 231580789;
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
