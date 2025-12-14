#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)44;
unsigned int var_4 = 958716421U;
signed char var_7 = (signed char)47;
unsigned int var_12 = 1995713091U;
unsigned char var_14 = (unsigned char)225;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)54350;
short var_20 = (short)-18643;
signed char var_21 = (signed char)-36;
unsigned char var_22 = (unsigned char)24;
signed char var_23 = (signed char)63;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
