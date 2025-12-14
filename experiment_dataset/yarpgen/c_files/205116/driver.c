#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1386757739;
short var_4 = (short)-20555;
int var_5 = -830336559;
int var_10 = -2112847608;
int var_11 = 841944370;
short var_14 = (short)31651;
int zero = 0;
long long int var_15 = 1671706578632481237LL;
unsigned short var_16 = (unsigned short)9238;
long long int var_17 = 6887092833275793533LL;
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
