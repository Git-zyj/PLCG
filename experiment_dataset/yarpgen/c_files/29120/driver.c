#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59998;
long long int var_2 = -6591125340062376422LL;
unsigned int var_3 = 2391628570U;
unsigned long long int var_4 = 12836814609316283363ULL;
unsigned int var_11 = 4183639077U;
unsigned int var_12 = 3076080928U;
short var_13 = (short)31263;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = 1662048504;
unsigned char var_16 = (unsigned char)193;
short var_17 = (short)4209;
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
