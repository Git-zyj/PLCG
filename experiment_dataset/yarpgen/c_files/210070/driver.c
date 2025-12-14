#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14934;
signed char var_6 = (signed char)-42;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_11 = 285801173;
signed char var_12 = (signed char)-105;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
