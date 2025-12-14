#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30275;
unsigned char var_7 = (unsigned char)238;
unsigned short var_10 = (unsigned short)3001;
int zero = 0;
long long int var_13 = -2102832715725785557LL;
unsigned short var_14 = (unsigned short)56546;
int var_15 = -1285990601;
unsigned int var_16 = 1823405797U;
_Bool var_17 = (_Bool)1;
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
