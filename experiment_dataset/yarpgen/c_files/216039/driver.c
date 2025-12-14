#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2225732866U;
short var_2 = (short)-20146;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)34514;
signed char var_5 = (signed char)-77;
unsigned char var_8 = (unsigned char)198;
unsigned long long int var_10 = 10048546027658505776ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)75;
_Bool var_16 = (_Bool)1;
short var_17 = (short)23065;
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
