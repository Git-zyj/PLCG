#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2025988485811847771LL;
int var_2 = 1173611607;
unsigned short var_4 = (unsigned short)63940;
int var_12 = -1062777799;
short var_13 = (short)-20960;
int zero = 0;
short var_15 = (short)8810;
unsigned short var_16 = (unsigned short)65462;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
