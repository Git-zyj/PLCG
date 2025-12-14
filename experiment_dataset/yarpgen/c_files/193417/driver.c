#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8028;
int var_8 = 1495440009;
unsigned char var_11 = (unsigned char)40;
unsigned int var_13 = 2704654539U;
short var_15 = (short)-9456;
int zero = 0;
short var_17 = (short)3727;
signed char var_18 = (signed char)-108;
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
