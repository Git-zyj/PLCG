#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1710199044;
short var_1 = (short)-25120;
unsigned char var_6 = (unsigned char)125;
unsigned char var_7 = (unsigned char)2;
short var_8 = (short)7866;
short var_9 = (short)-10790;
short var_10 = (short)-30772;
short var_11 = (short)-8704;
unsigned char var_12 = (unsigned char)111;
_Bool var_13 = (_Bool)0;
int var_18 = -85760180;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)61;
unsigned char var_22 = (unsigned char)4;
unsigned char var_23 = (unsigned char)49;
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
