#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16600;
unsigned char var_2 = (unsigned char)247;
short var_4 = (short)-22344;
short var_5 = (short)8570;
short var_8 = (short)4401;
short var_13 = (short)29326;
short var_14 = (short)-10228;
short var_15 = (short)18461;
int zero = 0;
unsigned char var_17 = (unsigned char)13;
short var_18 = (short)24022;
unsigned char var_19 = (unsigned char)90;
unsigned char var_20 = (unsigned char)210;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
