#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6779250067925581569ULL;
int var_1 = -1768450269;
unsigned int var_10 = 1737150550U;
unsigned short var_15 = (unsigned short)58368;
int zero = 0;
unsigned long long int var_18 = 4445857790703332102ULL;
unsigned long long int var_19 = 771529208824118768ULL;
unsigned long long int var_20 = 209121687886803993ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
