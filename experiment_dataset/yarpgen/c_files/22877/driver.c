#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5865201080628601299LL;
unsigned char var_4 = (unsigned char)95;
unsigned char var_8 = (unsigned char)165;
long long int var_11 = -3958143185204134923LL;
short var_13 = (short)-793;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned short var_15 = (unsigned short)48127;
unsigned long long int var_16 = 5494640629160453239ULL;
unsigned char var_17 = (unsigned char)66;
void init() {
}

void checksum() {
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
