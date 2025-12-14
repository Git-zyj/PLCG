#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)63488;
unsigned short var_7 = (unsigned short)56733;
int var_9 = -795632425;
unsigned int var_12 = 3470889244U;
unsigned short var_13 = (unsigned short)36907;
long long int var_14 = -7313600770249787732LL;
int zero = 0;
unsigned char var_15 = (unsigned char)21;
long long int var_16 = -6094784275396460032LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
