#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)119;
unsigned short var_3 = (unsigned short)42884;
unsigned char var_6 = (unsigned char)4;
unsigned char var_10 = (unsigned char)89;
unsigned short var_14 = (unsigned short)49457;
unsigned short var_17 = (unsigned short)35987;
int zero = 0;
short var_20 = (short)818;
unsigned short var_21 = (unsigned short)37721;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
