#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)43190;
signed char var_2 = (signed char)19;
unsigned char var_4 = (unsigned char)105;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 715035217U;
unsigned char var_7 = (unsigned char)127;
int var_8 = -1310599810;
unsigned char var_9 = (unsigned char)62;
int zero = 0;
signed char var_10 = (signed char)42;
unsigned short var_11 = (unsigned short)38909;
signed char var_12 = (signed char)-2;
unsigned long long int var_13 = 8973298640993582127ULL;
signed char var_14 = (signed char)36;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
