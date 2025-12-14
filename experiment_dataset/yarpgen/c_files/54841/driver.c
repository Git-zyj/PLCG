#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2009937073;
int var_2 = 845760762;
int var_3 = 339958181;
int var_4 = -536439042;
int var_5 = 121572223;
int zero = 0;
int var_12 = -1363655253;
int var_13 = 2095245975;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
