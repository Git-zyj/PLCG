#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -640195103;
signed char var_4 = (signed char)33;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 3896707821U;
unsigned int var_8 = 1852691930U;
short var_10 = (short)-1732;
int var_11 = -281257168;
int zero = 0;
unsigned int var_13 = 439478101U;
signed char var_14 = (signed char)103;
short var_15 = (short)12771;
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
