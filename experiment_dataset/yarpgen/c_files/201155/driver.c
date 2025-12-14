#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-91;
short var_8 = (short)-5463;
int var_10 = -244077494;
int zero = 0;
unsigned short var_13 = (unsigned short)11131;
long long int var_14 = -6147215290374496451LL;
short var_15 = (short)-10455;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
