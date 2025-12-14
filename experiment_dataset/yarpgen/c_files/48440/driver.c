#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
int var_7 = -1836315656;
int var_13 = -393058272;
unsigned short var_16 = (unsigned short)40311;
int zero = 0;
unsigned long long int var_20 = 2761906581453454235ULL;
short var_21 = (short)3840;
unsigned char var_22 = (unsigned char)8;
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
