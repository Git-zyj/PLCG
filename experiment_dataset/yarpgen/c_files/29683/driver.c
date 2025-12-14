#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_3 = 1185754706U;
long long int var_6 = -8838926514052089058LL;
signed char var_9 = (signed char)-75;
signed char var_10 = (signed char)78;
signed char var_12 = (signed char)-75;
signed char var_13 = (signed char)18;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_20 = 1203070099;
signed char var_21 = (signed char)14;
unsigned int var_22 = 1568614947U;
unsigned int var_23 = 1871425541U;
signed char var_24 = (signed char)103;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
