#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56139;
short var_4 = (short)30873;
unsigned char var_6 = (unsigned char)121;
signed char var_9 = (signed char)123;
unsigned long long int var_11 = 14290082178223280433ULL;
signed char var_12 = (signed char)-87;
int zero = 0;
unsigned short var_13 = (unsigned short)35887;
_Bool var_14 = (_Bool)1;
int var_15 = 155084976;
unsigned char var_16 = (unsigned char)242;
short var_17 = (short)-6264;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
