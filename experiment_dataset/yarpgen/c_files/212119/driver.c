#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2767187995U;
unsigned int var_11 = 1421385364U;
unsigned int var_12 = 1156083734U;
unsigned int var_15 = 4126475789U;
unsigned int var_19 = 2155311675U;
int zero = 0;
unsigned int var_20 = 2087948626U;
unsigned char var_21 = (unsigned char)8;
_Bool var_22 = (_Bool)1;
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
