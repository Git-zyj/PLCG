#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)22;
unsigned char var_4 = (unsigned char)130;
unsigned short var_5 = (unsigned short)55397;
int var_6 = 566578553;
short var_7 = (short)27318;
short var_8 = (short)-25014;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-20616;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)30264;
int var_13 = -2110868974;
unsigned long long int var_14 = 10281137031459275623ULL;
signed char var_15 = (signed char)18;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
