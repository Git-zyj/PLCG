#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14593;
unsigned short var_3 = (unsigned short)35228;
int var_6 = 323741600;
int var_10 = -865830250;
signed char var_12 = (signed char)-30;
unsigned short var_15 = (unsigned short)37926;
short var_16 = (short)2006;
unsigned char var_17 = (unsigned char)103;
int zero = 0;
signed char var_18 = (signed char)-94;
unsigned char var_19 = (unsigned char)221;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)18;
unsigned short var_22 = (unsigned short)30845;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
