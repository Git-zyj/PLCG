#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20206;
int var_3 = -2090679763;
unsigned int var_7 = 755051161U;
unsigned long long int var_11 = 6062404927802299633ULL;
unsigned short var_14 = (unsigned short)14800;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1604768659U;
unsigned int var_18 = 323881049U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
