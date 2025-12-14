#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2621204881U;
unsigned int var_10 = 2433977191U;
short var_11 = (short)15691;
long long int var_17 = -2639005419714309728LL;
int zero = 0;
signed char var_18 = (signed char)-79;
unsigned int var_19 = 3516396157U;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 731441624U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
