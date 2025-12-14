#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -209117625;
_Bool var_4 = (_Bool)1;
int var_8 = -599469052;
int var_9 = -280566350;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_13 = (unsigned char)33;
unsigned short var_14 = (unsigned short)48854;
short var_15 = (short)13482;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
