#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-51;
short var_3 = (short)-14303;
unsigned long long int var_4 = 10130695766762626903ULL;
unsigned long long int var_5 = 17964084077489975087ULL;
long long int var_6 = 5869963967336192458LL;
_Bool var_8 = (_Bool)0;
unsigned int var_13 = 431299535U;
int zero = 0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
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
