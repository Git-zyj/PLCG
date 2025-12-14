#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
long long int var_8 = 7001443274758291806LL;
unsigned short var_11 = (unsigned short)19163;
long long int var_13 = -1682545666623162372LL;
short var_15 = (short)-29465;
short var_16 = (short)-17029;
int zero = 0;
unsigned char var_17 = (unsigned char)181;
unsigned long long int var_18 = 6674311768235116590ULL;
void init() {
}

void checksum() {
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
