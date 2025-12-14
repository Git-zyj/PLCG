#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)1127;
signed char var_4 = (signed char)5;
unsigned long long int var_5 = 9083462959836329310ULL;
short var_6 = (short)-18554;
unsigned short var_8 = (unsigned short)6813;
signed char var_11 = (signed char)-18;
int zero = 0;
signed char var_12 = (signed char)80;
unsigned char var_13 = (unsigned char)148;
unsigned short var_14 = (unsigned short)54311;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 7718690776303125086ULL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
