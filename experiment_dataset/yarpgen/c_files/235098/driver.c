#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1352341485U;
int var_2 = -272137754;
int var_3 = -692803761;
unsigned short var_4 = (unsigned short)6008;
short var_7 = (short)21088;
_Bool var_9 = (_Bool)1;
unsigned char var_13 = (unsigned char)48;
int zero = 0;
unsigned int var_19 = 173792046U;
unsigned short var_20 = (unsigned short)38154;
signed char var_21 = (signed char)-26;
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
