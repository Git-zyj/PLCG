#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3238816977U;
unsigned long long int var_4 = 289759688152716191ULL;
short var_6 = (short)18080;
unsigned char var_11 = (unsigned char)13;
unsigned long long int var_12 = 18029039838365176769ULL;
int zero = 0;
unsigned long long int var_15 = 2236004875178600099ULL;
unsigned int var_16 = 3218116033U;
short var_17 = (short)7773;
short var_18 = (short)-26814;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
