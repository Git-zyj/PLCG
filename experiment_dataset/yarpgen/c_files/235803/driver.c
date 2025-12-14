#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)122;
short var_1 = (short)13836;
short var_2 = (short)-6452;
short var_5 = (short)24616;
_Bool var_6 = (_Bool)1;
short var_8 = (short)4059;
short var_9 = (short)-15185;
int zero = 0;
short var_10 = (short)-12106;
short var_11 = (short)-30250;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
