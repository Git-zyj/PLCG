#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7876278954222243349LL;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)39310;
short var_14 = (short)7178;
int zero = 0;
int var_17 = 53623703;
unsigned short var_18 = (unsigned short)29951;
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
