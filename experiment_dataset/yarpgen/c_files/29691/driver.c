#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
short var_12 = (short)-399;
short var_16 = (short)-16030;
short var_18 = (short)-18484;
int zero = 0;
long long int var_19 = 290286029152355827LL;
unsigned int var_20 = 3842463573U;
void init() {
}

void checksum() {
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
