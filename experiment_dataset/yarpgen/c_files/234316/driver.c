#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-7987;
int var_6 = 243951840;
short var_8 = (short)6622;
unsigned int var_10 = 109238796U;
unsigned short var_11 = (unsigned short)63156;
unsigned int var_13 = 3392787149U;
unsigned char var_14 = (unsigned char)164;
unsigned int var_16 = 3154667785U;
int zero = 0;
short var_19 = (short)8918;
unsigned short var_20 = (unsigned short)47993;
unsigned char var_21 = (unsigned char)83;
unsigned short var_22 = (unsigned short)19094;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
