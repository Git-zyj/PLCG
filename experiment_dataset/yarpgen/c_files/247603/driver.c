#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15586345984461986724ULL;
int var_7 = 1444058573;
unsigned short var_8 = (unsigned short)24392;
long long int var_9 = 7668343867762618728LL;
unsigned int var_10 = 3547801409U;
int zero = 0;
signed char var_13 = (signed char)-39;
unsigned char var_14 = (unsigned char)43;
unsigned int var_15 = 151909498U;
int var_16 = 1560291122;
int var_17 = 845864300;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
