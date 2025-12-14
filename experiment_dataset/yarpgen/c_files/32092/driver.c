#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1747241824;
unsigned int var_8 = 2433754262U;
_Bool var_9 = (_Bool)1;
unsigned long long int var_14 = 11526317117730692561ULL;
int zero = 0;
signed char var_18 = (signed char)99;
signed char var_19 = (signed char)-42;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
