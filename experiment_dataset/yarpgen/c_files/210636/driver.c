#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1676646897U;
unsigned short var_2 = (unsigned short)38843;
unsigned long long int var_4 = 10717578909003805901ULL;
short var_8 = (short)14222;
int zero = 0;
unsigned short var_16 = (unsigned short)28250;
unsigned long long int var_17 = 6738135881293653496ULL;
unsigned char var_18 = (unsigned char)45;
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
