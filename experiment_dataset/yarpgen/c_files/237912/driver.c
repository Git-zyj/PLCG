#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 2671282306U;
unsigned char var_4 = (unsigned char)244;
unsigned char var_6 = (unsigned char)113;
long long int var_7 = 6617735852677534266LL;
unsigned int var_10 = 3488071437U;
long long int var_13 = -6331359819644408649LL;
int zero = 0;
unsigned int var_16 = 543103475U;
unsigned int var_17 = 1467348498U;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
