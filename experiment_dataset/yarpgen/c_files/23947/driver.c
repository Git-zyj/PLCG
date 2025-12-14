#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 751037046;
unsigned short var_5 = (unsigned short)48280;
long long int var_6 = 3352156618479710452LL;
unsigned short var_7 = (unsigned short)23192;
short var_14 = (short)18120;
short var_15 = (short)-11064;
int zero = 0;
long long int var_16 = 8049051936053217007LL;
unsigned short var_17 = (unsigned short)8840;
unsigned short var_18 = (unsigned short)5581;
void init() {
}

void checksum() {
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
