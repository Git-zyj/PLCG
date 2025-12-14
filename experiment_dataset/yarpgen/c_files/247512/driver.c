#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3671033355U;
short var_5 = (short)20871;
unsigned short var_6 = (unsigned short)60671;
unsigned char var_12 = (unsigned char)145;
unsigned short var_13 = (unsigned short)31562;
unsigned char var_14 = (unsigned char)73;
unsigned char var_17 = (unsigned char)75;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)236;
unsigned char var_21 = (unsigned char)232;
unsigned int var_22 = 1875880669U;
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
