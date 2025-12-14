#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1440476637U;
short var_1 = (short)-27346;
_Bool var_6 = (_Bool)0;
unsigned int var_10 = 1395753050U;
short var_12 = (short)24939;
unsigned long long int var_16 = 15238330121666647351ULL;
int zero = 0;
unsigned int var_20 = 4004593009U;
short var_21 = (short)17844;
short var_22 = (short)-32128;
signed char var_23 = (signed char)42;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
