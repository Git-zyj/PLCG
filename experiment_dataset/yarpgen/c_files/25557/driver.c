#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -651138092;
unsigned long long int var_1 = 171472178545539194ULL;
signed char var_4 = (signed char)-44;
unsigned long long int var_8 = 14890856828841827486ULL;
unsigned int var_11 = 1646756918U;
int var_12 = 1302315357;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 6202457516176446875ULL;
unsigned long long int var_17 = 13528060127330675467ULL;
void init() {
}

void checksum() {
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
