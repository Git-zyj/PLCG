#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7400068325640456220ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 3477567494U;
int var_12 = 1877649006;
int zero = 0;
unsigned char var_16 = (unsigned char)3;
signed char var_17 = (signed char)-47;
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
