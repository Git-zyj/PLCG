#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)9463;
long long int var_4 = 5157368576415516995LL;
int var_13 = -1894113266;
long long int var_14 = 4887181144672982711LL;
unsigned short var_15 = (unsigned short)45378;
unsigned char var_16 = (unsigned char)215;
int zero = 0;
long long int var_17 = -5840180364903094556LL;
_Bool var_18 = (_Bool)1;
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
