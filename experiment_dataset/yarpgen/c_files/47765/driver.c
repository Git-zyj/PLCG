#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12606;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)11;
unsigned long long int var_7 = 6859536247520274189ULL;
unsigned short var_8 = (unsigned short)20677;
unsigned int var_9 = 3413685366U;
unsigned int var_11 = 1471962686U;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3562113403U;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
