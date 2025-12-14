#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6155;
unsigned int var_2 = 949771906U;
unsigned long long int var_3 = 17244232620193234000ULL;
unsigned char var_4 = (unsigned char)140;
unsigned char var_5 = (unsigned char)143;
unsigned int var_8 = 2126504873U;
int var_11 = 686756526;
unsigned int var_14 = 3747628918U;
unsigned char var_16 = (unsigned char)253;
int zero = 0;
unsigned int var_17 = 3874822769U;
int var_18 = 271747099;
unsigned int var_19 = 2980216403U;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
