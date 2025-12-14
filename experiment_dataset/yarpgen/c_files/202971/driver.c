#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3850463686071607455LL;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-24;
long long int var_4 = -7329413928770542912LL;
int var_6 = -474643047;
unsigned int var_7 = 603276602U;
long long int var_8 = -4443744145584102323LL;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-40;
int zero = 0;
int var_12 = -286657642;
signed char var_13 = (signed char)99;
unsigned int var_14 = 117955798U;
signed char var_15 = (signed char)66;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
