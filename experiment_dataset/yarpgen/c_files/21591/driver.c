#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1603514107;
short var_2 = (short)-610;
unsigned long long int var_6 = 2986890648543376380ULL;
int var_12 = -1159583438;
short var_13 = (short)-10352;
unsigned long long int var_15 = 2272006003120051741ULL;
short var_16 = (short)-5552;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = 4401042934378474397LL;
void init() {
}

void checksum() {
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
