#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6601473153328339189LL;
_Bool var_3 = (_Bool)1;
short var_11 = (short)3853;
long long int var_12 = 4966046217538446354LL;
int zero = 0;
long long int var_14 = -107972923773093968LL;
int var_15 = 408778419;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 511253606U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
