#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63227;
signed char var_2 = (signed char)30;
unsigned long long int var_3 = 14332829742805462114ULL;
unsigned char var_5 = (unsigned char)100;
short var_6 = (short)26698;
signed char var_8 = (signed char)-58;
long long int var_9 = 918718745935593483LL;
int var_10 = -800636764;
int zero = 0;
signed char var_15 = (signed char)-44;
short var_16 = (short)23973;
unsigned long long int var_17 = 1756107849867523642ULL;
signed char var_18 = (signed char)107;
unsigned char var_19 = (unsigned char)6;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
