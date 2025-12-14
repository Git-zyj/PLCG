#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-799;
int var_4 = -701311663;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)54525;
signed char var_8 = (signed char)122;
unsigned short var_10 = (unsigned short)33009;
unsigned int var_12 = 3950940685U;
int var_16 = -295352450;
long long int var_17 = 4910656895786215170LL;
int zero = 0;
unsigned char var_20 = (unsigned char)151;
long long int var_21 = -6433588600819257234LL;
long long int var_22 = -6974625522123758838LL;
short var_23 = (short)21652;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
