#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)43;
short var_2 = (short)-19506;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)52;
int zero = 0;
signed char var_16 = (signed char)(-127 - 1);
short var_17 = (short)12115;
short var_18 = (short)17404;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
