#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 743363303U;
unsigned int var_3 = 1782276667U;
unsigned short var_7 = (unsigned short)29144;
unsigned short var_10 = (unsigned short)62977;
unsigned char var_11 = (unsigned char)92;
unsigned char var_13 = (unsigned char)53;
unsigned short var_15 = (unsigned short)52578;
int zero = 0;
unsigned short var_17 = (unsigned short)54290;
unsigned short var_18 = (unsigned short)50339;
unsigned short var_19 = (unsigned short)50596;
signed char var_20 = (signed char)-57;
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
