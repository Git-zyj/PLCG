#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1162551456;
unsigned char var_5 = (unsigned char)118;
signed char var_7 = (signed char)96;
short var_14 = (short)19157;
short var_17 = (short)21304;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)48;
signed char var_22 = (signed char)-14;
unsigned int var_23 = 3406777525U;
short var_24 = (short)21059;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
