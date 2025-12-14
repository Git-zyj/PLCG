#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21318;
_Bool var_1 = (_Bool)1;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)0;
int zero = 0;
int var_12 = 1934125239;
unsigned int var_13 = 1181972875U;
unsigned short var_14 = (unsigned short)50611;
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
