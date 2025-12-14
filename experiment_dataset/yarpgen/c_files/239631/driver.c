#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 3756497477721433458LL;
int var_14 = -1299013630;
unsigned short var_15 = (unsigned short)44866;
unsigned short var_16 = (unsigned short)56373;
int zero = 0;
short var_20 = (short)20165;
short var_21 = (short)23561;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
