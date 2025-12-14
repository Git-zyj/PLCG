#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)202;
short var_1 = (short)1880;
signed char var_2 = (signed char)93;
unsigned int var_3 = 2200358282U;
int var_4 = -1505311858;
signed char var_5 = (signed char)-88;
signed char var_6 = (signed char)62;
signed char var_7 = (signed char)-89;
short var_8 = (short)18020;
unsigned int var_10 = 2213059665U;
int zero = 0;
unsigned int var_11 = 1384050589U;
signed char var_12 = (signed char)-103;
unsigned int var_13 = 1360658800U;
unsigned short var_14 = (unsigned short)16387;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
