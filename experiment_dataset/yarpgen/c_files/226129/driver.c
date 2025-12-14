#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)42860;
unsigned short var_5 = (unsigned short)29617;
unsigned char var_11 = (unsigned char)80;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)76;
unsigned short var_17 = (unsigned short)56753;
int zero = 0;
signed char var_20 = (signed char)-12;
unsigned short var_21 = (unsigned short)6320;
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
