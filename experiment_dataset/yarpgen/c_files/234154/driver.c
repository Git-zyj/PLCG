#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -643281170;
signed char var_5 = (signed char)86;
_Bool var_7 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)73;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-22694;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
