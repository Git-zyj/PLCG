#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1265144583257197323LL;
unsigned char var_1 = (unsigned char)97;
int var_2 = -888492588;
short var_5 = (short)6630;
signed char var_7 = (signed char)91;
unsigned char var_8 = (unsigned char)35;
unsigned int var_11 = 853761303U;
unsigned short var_13 = (unsigned short)13234;
signed char var_16 = (signed char)107;
unsigned char var_17 = (unsigned char)234;
int zero = 0;
unsigned char var_20 = (unsigned char)88;
signed char var_21 = (signed char)-104;
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
