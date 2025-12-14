#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1298402632;
long long int var_5 = -5371114976240837943LL;
_Bool var_10 = (_Bool)1;
short var_11 = (short)3066;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 6175618873934209809ULL;
short var_19 = (short)2024;
short var_20 = (short)20653;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
