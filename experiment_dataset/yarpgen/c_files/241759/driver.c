#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -24894772;
unsigned int var_3 = 2443806898U;
short var_5 = (short)19575;
int zero = 0;
signed char var_11 = (signed char)-31;
unsigned int var_12 = 1220227873U;
unsigned long long int var_13 = 15495689207436886414ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
