#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)-557;
short var_15 = (short)24243;
unsigned short var_17 = (unsigned short)12023;
int zero = 0;
unsigned short var_18 = (unsigned short)10347;
int var_19 = -1494814007;
unsigned short var_20 = (unsigned short)1350;
void init() {
}

void checksum() {
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
