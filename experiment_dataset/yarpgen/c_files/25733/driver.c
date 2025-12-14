#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-16266;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 9561174503242470450ULL;
unsigned char var_5 = (unsigned char)136;
short var_6 = (short)-8677;
int var_9 = -704947891;
signed char var_10 = (signed char)-21;
short var_12 = (short)-32264;
int zero = 0;
unsigned short var_13 = (unsigned short)45741;
signed char var_14 = (signed char)126;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)33458;
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
