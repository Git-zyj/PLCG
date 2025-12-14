#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3757193490U;
_Bool var_11 = (_Bool)0;
long long int var_12 = 6939982887775443236LL;
signed char var_15 = (signed char)10;
int zero = 0;
unsigned short var_20 = (unsigned short)51305;
unsigned int var_21 = 3045089784U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
