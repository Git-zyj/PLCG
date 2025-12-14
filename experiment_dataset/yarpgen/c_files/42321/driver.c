#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)14186;
unsigned char var_3 = (unsigned char)43;
unsigned int var_4 = 3274570029U;
_Bool var_8 = (_Bool)0;
short var_11 = (short)13026;
signed char var_12 = (signed char)8;
int zero = 0;
short var_14 = (short)3336;
short var_15 = (short)-29799;
void init() {
}

void checksum() {
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
