#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -317952593;
signed char var_8 = (signed char)113;
unsigned int var_9 = 3168834103U;
signed char var_12 = (signed char)-119;
signed char var_13 = (signed char)21;
unsigned long long int var_15 = 11060508137955811297ULL;
int zero = 0;
short var_18 = (short)-25290;
short var_19 = (short)6582;
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
