#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1614736476;
int var_2 = 1630522210;
unsigned short var_5 = (unsigned short)56695;
int var_10 = 1597941535;
int zero = 0;
unsigned short var_12 = (unsigned short)20933;
int var_13 = 1993742577;
unsigned short var_14 = (unsigned short)43549;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
