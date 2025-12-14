#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
int var_5 = -1477080597;
unsigned long long int var_6 = 3042990760985659476ULL;
long long int var_7 = -3295080232536106925LL;
unsigned int var_12 = 1586963595U;
int zero = 0;
unsigned long long int var_15 = 5427259567733632941ULL;
unsigned char var_16 = (unsigned char)19;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)97;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
