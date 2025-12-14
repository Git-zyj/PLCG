#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2061481090;
_Bool var_13 = (_Bool)1;
int var_16 = -944263356;
unsigned int var_17 = 226660404U;
int zero = 0;
short var_18 = (short)-2623;
short var_19 = (short)35;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
