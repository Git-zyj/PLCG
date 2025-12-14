#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1834354565U;
unsigned short var_1 = (unsigned short)6319;
unsigned long long int var_3 = 10042781289343070654ULL;
short var_5 = (short)-23853;
unsigned int var_10 = 766052906U;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 11965443101704298748ULL;
unsigned short var_14 = (unsigned short)6871;
long long int var_15 = 4643431398567145523LL;
void init() {
}

void checksum() {
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
