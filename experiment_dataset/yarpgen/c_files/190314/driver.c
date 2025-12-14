#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8168847618983566220LL;
_Bool var_2 = (_Bool)1;
short var_4 = (short)-18654;
unsigned char var_7 = (unsigned char)248;
unsigned int var_8 = 922422874U;
_Bool var_9 = (_Bool)0;
unsigned short var_12 = (unsigned short)63955;
int var_13 = 879296731;
unsigned int var_15 = 829676264U;
int zero = 0;
signed char var_20 = (signed char)15;
short var_21 = (short)17627;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
