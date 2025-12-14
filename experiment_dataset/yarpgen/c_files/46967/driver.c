#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)152;
short var_5 = (short)26439;
unsigned char var_6 = (unsigned char)131;
unsigned char var_10 = (unsigned char)146;
_Bool var_11 = (_Bool)0;
unsigned int var_13 = 3366991837U;
signed char var_14 = (signed char)30;
int zero = 0;
unsigned char var_15 = (unsigned char)32;
unsigned short var_16 = (unsigned short)58547;
void init() {
}

void checksum() {
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
