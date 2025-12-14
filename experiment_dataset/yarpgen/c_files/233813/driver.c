#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27400;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-5416;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-21495;
unsigned short var_17 = (unsigned short)40247;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)61871;
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
