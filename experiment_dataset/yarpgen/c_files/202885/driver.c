#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)61;
unsigned int var_1 = 3267797383U;
unsigned int var_3 = 1632606768U;
unsigned char var_4 = (unsigned char)9;
unsigned char var_6 = (unsigned char)244;
unsigned int var_7 = 3625388740U;
unsigned int var_8 = 329852062U;
unsigned short var_9 = (unsigned short)2748;
int zero = 0;
unsigned short var_13 = (unsigned short)10901;
short var_14 = (short)-13534;
short var_15 = (short)30992;
unsigned char var_16 = (unsigned char)160;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
