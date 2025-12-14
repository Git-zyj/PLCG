#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 13984875432425303768ULL;
int var_5 = 1243157298;
int var_6 = -508140895;
long long int var_8 = -376074872890658773LL;
signed char var_11 = (signed char)31;
int zero = 0;
long long int var_12 = -5051911844322506125LL;
signed char var_13 = (signed char)41;
long long int var_14 = 6769161190033899243LL;
int var_15 = -39010178;
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
