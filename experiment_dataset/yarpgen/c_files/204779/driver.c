#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3923976583U;
unsigned short var_3 = (unsigned short)2276;
signed char var_4 = (signed char)-36;
unsigned char var_6 = (unsigned char)29;
unsigned short var_7 = (unsigned short)43473;
short var_9 = (short)8421;
signed char var_10 = (signed char)-114;
unsigned char var_12 = (unsigned char)85;
unsigned int var_14 = 442728739U;
int zero = 0;
unsigned char var_15 = (unsigned char)116;
unsigned short var_16 = (unsigned short)38735;
unsigned int var_17 = 2105887935U;
void init() {
}

void checksum() {
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
