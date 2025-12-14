#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 4158579338U;
unsigned char var_2 = (unsigned char)186;
unsigned long long int var_3 = 15636726635225521476ULL;
unsigned long long int var_4 = 6908373102092893066ULL;
short var_6 = (short)-9642;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)59437;
long long int var_11 = -8278257700146875559LL;
unsigned char var_12 = (unsigned char)235;
int zero = 0;
unsigned short var_14 = (unsigned short)57905;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)97;
unsigned char var_17 = (unsigned char)233;
unsigned short var_18 = (unsigned short)35375;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
