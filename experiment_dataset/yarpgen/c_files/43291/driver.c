#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3764284295U;
unsigned int var_9 = 1720088523U;
long long int var_11 = -5729398955488625387LL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 2569263594965778135ULL;
int zero = 0;
unsigned long long int var_17 = 5916692641887175510ULL;
short var_18 = (short)-24323;
unsigned int var_19 = 2128792264U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
