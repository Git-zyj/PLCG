#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)97;
int var_4 = -2016151863;
unsigned int var_5 = 3127734350U;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_12 = -595629005;
unsigned int var_13 = 3579305638U;
int var_14 = 48957505;
signed char var_15 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
