#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned int var_5 = 1947009040U;
signed char var_16 = (signed char)-100;
int zero = 0;
short var_19 = (short)11194;
short var_20 = (short)-32661;
unsigned int var_21 = 2241702790U;
unsigned short var_22 = (unsigned short)39753;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
