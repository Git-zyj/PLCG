#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)4345;
long long int var_6 = -1981797318852482274LL;
unsigned int var_10 = 1007110223U;
unsigned char var_12 = (unsigned char)223;
int var_13 = -165112517;
int zero = 0;
unsigned long long int var_15 = 411006875773788575ULL;
_Bool var_16 = (_Bool)0;
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
