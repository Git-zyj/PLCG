#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46120;
unsigned short var_1 = (unsigned short)38628;
short var_3 = (short)9271;
unsigned short var_4 = (unsigned short)23232;
short var_5 = (short)31707;
int var_6 = 1102428664;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)46;
unsigned char var_12 = (unsigned char)71;
unsigned short var_13 = (unsigned short)49538;
int zero = 0;
unsigned short var_14 = (unsigned short)52762;
int var_15 = 1217918669;
unsigned char var_16 = (unsigned char)59;
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
