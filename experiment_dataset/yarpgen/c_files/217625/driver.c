#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5918116577799221646ULL;
unsigned short var_2 = (unsigned short)17979;
int var_5 = 690279107;
signed char var_12 = (signed char)-68;
unsigned long long int var_15 = 13942475513893858804ULL;
short var_16 = (short)6197;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-83;
unsigned int var_22 = 3980140905U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
