#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)1198;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)88;
unsigned short var_14 = (unsigned short)37251;
signed char var_16 = (signed char)63;
unsigned char var_17 = (unsigned char)33;
int zero = 0;
unsigned char var_19 = (unsigned char)127;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
