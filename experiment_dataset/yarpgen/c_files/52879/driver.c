#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)88;
short var_2 = (short)-32167;
short var_3 = (short)-24154;
unsigned long long int var_6 = 12413874156706714965ULL;
unsigned long long int var_8 = 4565223037574841962ULL;
unsigned long long int var_10 = 12347818961184044613ULL;
unsigned int var_11 = 2307378111U;
int zero = 0;
int var_15 = -1513794071;
unsigned long long int var_16 = 15053095879619704807ULL;
unsigned long long int var_17 = 15666090564084575698ULL;
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
