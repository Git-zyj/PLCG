#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)115;
unsigned int var_2 = 75993982U;
short var_3 = (short)-17579;
unsigned char var_4 = (unsigned char)58;
_Bool var_5 = (_Bool)0;
int var_6 = -983582390;
unsigned short var_13 = (unsigned short)24196;
signed char var_14 = (signed char)-12;
unsigned char var_16 = (unsigned char)194;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)16754;
_Bool var_19 = (_Bool)0;
int var_20 = 703036615;
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
