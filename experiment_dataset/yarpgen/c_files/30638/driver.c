#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1329302105U;
_Bool var_7 = (_Bool)1;
long long int var_8 = 4017475030249055282LL;
unsigned int var_10 = 2294541522U;
int zero = 0;
unsigned char var_13 = (unsigned char)147;
unsigned int var_14 = 2403576556U;
unsigned int var_15 = 4142963299U;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)109;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
