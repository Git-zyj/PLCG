#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9038;
unsigned short var_9 = (unsigned short)33364;
short var_10 = (short)-817;
unsigned short var_13 = (unsigned short)53694;
unsigned short var_15 = (unsigned short)35230;
long long int var_17 = -1312041589732252003LL;
int zero = 0;
unsigned char var_18 = (unsigned char)174;
unsigned short var_19 = (unsigned short)30664;
void init() {
}

void checksum() {
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
