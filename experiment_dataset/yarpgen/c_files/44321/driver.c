#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)14486;
unsigned int var_6 = 1128272408U;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 1196437644U;
int var_10 = -1067015471;
int zero = 0;
int var_14 = -1766624013;
unsigned int var_15 = 4081356367U;
unsigned long long int var_16 = 9396232368158636259ULL;
unsigned int var_17 = 1833858825U;
void init() {
}

void checksum() {
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
