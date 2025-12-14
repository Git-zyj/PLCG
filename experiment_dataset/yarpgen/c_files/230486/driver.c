#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2962157259U;
unsigned short var_9 = (unsigned short)14319;
short var_13 = (short)16608;
int var_14 = 1161759277;
int zero = 0;
short var_18 = (short)-22000;
short var_19 = (short)-14526;
int var_20 = -1907014593;
void init() {
}

void checksum() {
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
