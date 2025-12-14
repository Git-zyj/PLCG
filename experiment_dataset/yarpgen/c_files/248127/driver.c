#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)68;
int var_3 = -324826431;
_Bool var_5 = (_Bool)1;
long long int var_6 = 4328570709619295095LL;
int var_8 = -1526732168;
short var_9 = (short)-13084;
unsigned int var_10 = 1734968348U;
unsigned char var_11 = (unsigned char)206;
unsigned char var_13 = (unsigned char)160;
unsigned char var_14 = (unsigned char)30;
int zero = 0;
unsigned char var_16 = (unsigned char)142;
unsigned char var_17 = (unsigned char)136;
unsigned short var_18 = (unsigned short)63838;
void init() {
}

void checksum() {
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
