#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22562;
unsigned int var_2 = 920521758U;
int var_3 = 21949500;
long long int var_4 = 6699425293684173617LL;
unsigned short var_5 = (unsigned short)54201;
int var_12 = -522285319;
unsigned long long int var_14 = 15391679482419446678ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)53580;
short var_17 = (short)-12597;
unsigned short var_18 = (unsigned short)35627;
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
