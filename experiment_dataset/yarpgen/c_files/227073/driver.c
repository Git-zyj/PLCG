#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8436015725495398265ULL;
unsigned short var_5 = (unsigned short)55704;
unsigned long long int var_7 = 12286199291512436678ULL;
int zero = 0;
unsigned int var_11 = 10639532U;
long long int var_12 = 4389335394580858259LL;
unsigned long long int var_13 = 1277740707643009127ULL;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
