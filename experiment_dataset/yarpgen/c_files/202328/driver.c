#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)139;
unsigned long long int var_8 = 16172990388309081317ULL;
unsigned char var_10 = (unsigned char)33;
short var_13 = (short)31004;
long long int var_14 = 4174848218467663455LL;
short var_16 = (short)13765;
unsigned char var_17 = (unsigned char)253;
int zero = 0;
unsigned char var_18 = (unsigned char)213;
_Bool var_19 = (_Bool)1;
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
