#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15099314185536123753ULL;
short var_2 = (short)30134;
short var_5 = (short)20785;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)142;
unsigned char var_10 = (unsigned char)234;
int zero = 0;
unsigned short var_14 = (unsigned short)21200;
unsigned char var_15 = (unsigned char)130;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)211;
signed char var_18 = (signed char)-45;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
