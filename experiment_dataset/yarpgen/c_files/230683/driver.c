#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1277911922;
short var_5 = (short)16680;
unsigned short var_11 = (unsigned short)17487;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)21309;
long long int var_16 = -9065402108108220584LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = -2419970434418026717LL;
_Bool var_20 = (_Bool)1;
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
