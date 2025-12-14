#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 6623732179088094231LL;
short var_6 = (short)-31783;
short var_11 = (short)8120;
int zero = 0;
short var_15 = (short)-13263;
signed char var_16 = (signed char)-108;
signed char var_17 = (signed char)3;
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
