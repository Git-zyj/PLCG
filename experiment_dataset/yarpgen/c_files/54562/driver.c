#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)81;
int var_3 = 796644959;
long long int var_7 = 359263773994970500LL;
unsigned int var_11 = 3063314089U;
short var_14 = (short)24672;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_17 = -6546862156998895534LL;
short var_18 = (short)32561;
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
