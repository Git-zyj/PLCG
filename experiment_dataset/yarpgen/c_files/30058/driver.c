#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)47;
signed char var_6 = (signed char)-16;
signed char var_10 = (signed char)59;
short var_11 = (short)-30249;
signed char var_13 = (signed char)126;
int zero = 0;
long long int var_14 = 345077982930296378LL;
_Bool var_15 = (_Bool)1;
long long int var_16 = 40377793615607211LL;
void init() {
}

void checksum() {
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
