#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)8;
int var_1 = -174232330;
long long int var_2 = 6812333611067677043LL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 14166322088912251617ULL;
unsigned int var_6 = 3189991547U;
unsigned int var_7 = 4199129949U;
int zero = 0;
int var_11 = -714009506;
short var_12 = (short)30245;
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
