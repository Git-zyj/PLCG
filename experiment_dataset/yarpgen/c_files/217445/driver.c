#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)5088;
int var_6 = 1046106725;
short var_9 = (short)-26469;
signed char var_11 = (signed char)87;
signed char var_12 = (signed char)54;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-32051;
void init() {
}

void checksum() {
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
