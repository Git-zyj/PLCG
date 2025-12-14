#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3278468886U;
long long int var_5 = -8935503361946098140LL;
unsigned int var_11 = 3330083500U;
unsigned long long int var_13 = 7050910834282930774ULL;
int zero = 0;
short var_15 = (short)5413;
long long int var_16 = 9102345615958065782LL;
int var_17 = 1692796055;
unsigned int var_18 = 650389156U;
signed char var_19 = (signed char)-8;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
