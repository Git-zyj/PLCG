#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)30486;
unsigned int var_5 = 1183695946U;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 2862291778U;
int var_15 = 1270333883;
short var_16 = (short)17360;
long long int var_17 = -5816801958092201468LL;
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
