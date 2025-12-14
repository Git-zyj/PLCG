#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1249903512;
unsigned short var_13 = (unsigned short)5262;
short var_14 = (short)25993;
int zero = 0;
unsigned long long int var_17 = 10407952447814765353ULL;
long long int var_18 = -272225763463703924LL;
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
