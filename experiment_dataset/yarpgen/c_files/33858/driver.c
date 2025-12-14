#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26254;
short var_5 = (short)20069;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)253;
unsigned int var_9 = 1557889902U;
int var_10 = -126752988;
unsigned short var_12 = (unsigned short)35894;
unsigned char var_17 = (unsigned char)224;
int var_18 = 1809244102;
int zero = 0;
signed char var_19 = (signed char)-60;
unsigned char var_20 = (unsigned char)24;
unsigned char var_21 = (unsigned char)225;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
