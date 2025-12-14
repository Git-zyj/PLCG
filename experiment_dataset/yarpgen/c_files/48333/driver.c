#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22313;
unsigned short var_2 = (unsigned short)59836;
short var_6 = (short)-13629;
unsigned int var_12 = 1103785178U;
unsigned short var_16 = (unsigned short)10659;
int zero = 0;
unsigned int var_20 = 3618797415U;
short var_21 = (short)31254;
_Bool var_22 = (_Bool)0;
short var_23 = (short)28284;
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
