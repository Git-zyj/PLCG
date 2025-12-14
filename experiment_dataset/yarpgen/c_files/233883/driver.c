#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)33;
unsigned short var_2 = (unsigned short)40440;
unsigned long long int var_4 = 147122283833728025ULL;
unsigned char var_5 = (unsigned char)165;
unsigned char var_7 = (unsigned char)93;
int var_8 = 108410294;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-26205;
unsigned int var_16 = 2688756037U;
long long int var_17 = -3582004561497971511LL;
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
