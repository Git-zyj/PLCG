#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)44569;
unsigned short var_8 = (unsigned short)21790;
_Bool var_11 = (_Bool)1;
long long int var_14 = 6409169049194964884LL;
int zero = 0;
unsigned short var_16 = (unsigned short)56379;
unsigned short var_17 = (unsigned short)7907;
unsigned int var_18 = 94947196U;
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
