#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-19466;
signed char var_5 = (signed char)31;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 3487302877U;
int var_11 = -815857853;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)24711;
signed char var_18 = (signed char)96;
int var_19 = -238912226;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
