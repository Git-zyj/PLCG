#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1485398691U;
unsigned short var_6 = (unsigned short)23845;
unsigned long long int var_7 = 16325617786319342971ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
short var_11 = (short)4928;
int var_12 = 143268608;
long long int var_13 = -8231689459412324711LL;
unsigned int var_14 = 122744091U;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
