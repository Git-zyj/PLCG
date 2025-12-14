#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1836657535;
unsigned int var_4 = 1065164821U;
unsigned short var_9 = (unsigned short)62080;
unsigned char var_14 = (unsigned char)62;
long long int var_15 = 1936700015739040915LL;
int zero = 0;
unsigned int var_17 = 4194914943U;
unsigned short var_18 = (unsigned short)15824;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
