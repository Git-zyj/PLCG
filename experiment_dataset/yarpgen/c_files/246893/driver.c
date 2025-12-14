#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2186608751193687025LL;
short var_3 = (short)10715;
int var_8 = -1749948024;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)4816;
_Bool var_12 = (_Bool)1;
long long int var_13 = 1002065096030455361LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
