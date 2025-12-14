#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17802;
short var_3 = (short)9860;
short var_4 = (short)-30321;
short var_6 = (short)-20150;
short var_8 = (short)-1308;
int zero = 0;
short var_14 = (short)-5230;
short var_15 = (short)878;
short var_16 = (short)-20019;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
