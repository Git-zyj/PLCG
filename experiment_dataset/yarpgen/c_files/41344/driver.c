#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1976623707;
long long int var_10 = -3661235207757851338LL;
long long int var_15 = 5062142161927331648LL;
unsigned long long int var_16 = 12608290146508695181ULL;
signed char var_17 = (signed char)-83;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)18920;
unsigned short var_21 = (unsigned short)49073;
unsigned int var_22 = 3725984270U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
