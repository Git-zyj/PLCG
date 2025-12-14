#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-30;
long long int var_1 = -5148449278713733027LL;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 2423838371U;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)33;
signed char var_12 = (signed char)12;
long long int var_14 = 8382941413455656132LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)78;
unsigned int var_21 = 3672807345U;
int var_22 = 946690235;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
