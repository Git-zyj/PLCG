#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)113;
int var_3 = -1673649262;
int var_6 = 733886616;
unsigned short var_7 = (unsigned short)37406;
signed char var_8 = (signed char)78;
unsigned int var_12 = 2433076725U;
short var_15 = (short)28863;
signed char var_17 = (signed char)92;
int zero = 0;
signed char var_18 = (signed char)46;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-7651;
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
