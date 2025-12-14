#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1299463779U;
unsigned int var_7 = 3899756663U;
unsigned int var_10 = 4010319999U;
unsigned int var_12 = 4048187403U;
unsigned long long int var_13 = 16074542747833110145ULL;
signed char var_14 = (signed char)-89;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)21;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
