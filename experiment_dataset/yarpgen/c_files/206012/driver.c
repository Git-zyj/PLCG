#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1452976123;
unsigned short var_10 = (unsigned short)12939;
unsigned int var_14 = 1796493187U;
int zero = 0;
int var_17 = 1108577599;
short var_18 = (short)-20412;
unsigned short var_19 = (unsigned short)21723;
short var_20 = (short)792;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
