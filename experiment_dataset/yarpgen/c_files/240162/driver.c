#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38519;
unsigned short var_1 = (unsigned short)35744;
unsigned short var_2 = (unsigned short)12127;
unsigned int var_5 = 3784999636U;
unsigned short var_7 = (unsigned short)55524;
int var_8 = -856410968;
unsigned char var_13 = (unsigned char)47;
long long int var_15 = -8323732463279425778LL;
int zero = 0;
signed char var_16 = (signed char)58;
short var_17 = (short)-20084;
void init() {
}

void checksum() {
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
