#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)24488;
unsigned long long int var_4 = 417636113034862388ULL;
signed char var_6 = (signed char)-86;
unsigned short var_7 = (unsigned short)47779;
short var_10 = (short)20016;
unsigned char var_12 = (unsigned char)177;
int zero = 0;
signed char var_20 = (signed char)-15;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)22497;
unsigned long long int var_23 = 7395902840977452403ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
