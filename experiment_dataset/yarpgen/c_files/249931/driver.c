#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-13520;
unsigned short var_8 = (unsigned short)63047;
unsigned short var_17 = (unsigned short)4760;
int zero = 0;
unsigned long long int var_18 = 11502734813701827563ULL;
unsigned short var_19 = (unsigned short)19418;
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
