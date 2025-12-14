#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14474713150842881376ULL;
short var_2 = (short)-11923;
short var_3 = (short)-6304;
short var_6 = (short)-7491;
int zero = 0;
short var_10 = (short)-10205;
unsigned long long int var_11 = 15080434313005152502ULL;
short var_12 = (short)12023;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
