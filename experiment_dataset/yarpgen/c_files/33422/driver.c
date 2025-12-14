#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)(-127 - 1);
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-65;
unsigned int var_11 = 2084543974U;
int zero = 0;
unsigned int var_17 = 4204210239U;
int var_18 = -944495471;
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
