#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_4 = 1870434367;
long long int var_9 = 7848606588232552459LL;
short var_10 = (short)-13026;
unsigned short var_12 = (unsigned short)64119;
unsigned int var_14 = 626363080U;
int zero = 0;
long long int var_20 = -8660324593727766224LL;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 3102851322U;
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
