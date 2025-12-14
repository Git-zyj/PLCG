#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15972;
int var_2 = 1898924217;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)92;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)241;
int zero = 0;
unsigned int var_20 = 2902427646U;
unsigned int var_21 = 2114188254U;
unsigned char var_22 = (unsigned char)105;
long long int var_23 = 6551265112285459908LL;
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
