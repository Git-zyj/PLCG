#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_4 = (unsigned char)208;
unsigned int var_5 = 1531283017U;
unsigned char var_6 = (unsigned char)174;
int var_10 = -647350622;
short var_11 = (short)-23964;
unsigned short var_13 = (unsigned short)11746;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-102;
signed char var_22 = (signed char)5;
unsigned char var_23 = (unsigned char)213;
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
