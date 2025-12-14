#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32772;
unsigned short var_2 = (unsigned short)65244;
unsigned int var_5 = 3014395636U;
unsigned char var_6 = (unsigned char)108;
short var_7 = (short)7432;
_Bool var_8 = (_Bool)1;
unsigned short var_11 = (unsigned short)38756;
_Bool var_12 = (_Bool)1;
short var_13 = (short)2468;
int zero = 0;
unsigned int var_14 = 1599281430U;
unsigned long long int var_15 = 2727620523824848439ULL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
