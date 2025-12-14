#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_3 = 2541277367U;
unsigned long long int var_4 = 3357300664734555572ULL;
unsigned long long int var_8 = 549126872806445979ULL;
signed char var_11 = (signed char)-125;
unsigned char var_14 = (unsigned char)42;
int zero = 0;
unsigned long long int var_19 = 11892994395036032000ULL;
unsigned int var_20 = 4185596873U;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
