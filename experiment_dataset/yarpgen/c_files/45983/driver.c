#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_6 = (signed char)-5;
unsigned long long int var_11 = 16479319350964663353ULL;
_Bool var_12 = (_Bool)1;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 10360745949292072492ULL;
signed char var_17 = (signed char)16;
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
