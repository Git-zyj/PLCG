#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 5608814610877006369LL;
short var_5 = (short)876;
_Bool var_6 = (_Bool)1;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_11 = 908305858;
_Bool var_12 = (_Bool)1;
int var_13 = -1208902409;
void init() {
}

void checksum() {
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
