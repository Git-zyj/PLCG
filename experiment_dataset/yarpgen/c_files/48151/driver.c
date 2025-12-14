#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18474;
unsigned int var_1 = 3923384753U;
unsigned long long int var_3 = 15850604632304805507ULL;
long long int var_5 = -7932219435475407512LL;
unsigned short var_9 = (unsigned short)56202;
int zero = 0;
short var_10 = (short)20143;
unsigned char var_11 = (unsigned char)30;
long long int var_12 = -1281162566099036424LL;
int var_13 = -806109030;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
