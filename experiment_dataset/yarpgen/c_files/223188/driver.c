#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17817;
unsigned int var_3 = 600968686U;
int var_5 = 1546299686;
int var_6 = -176730061;
unsigned int var_7 = 2401414303U;
long long int var_10 = 6094971702893401961LL;
signed char var_11 = (signed char)123;
signed char var_13 = (signed char)-124;
int var_18 = -1952646065;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)148;
int var_21 = 1198158711;
signed char var_22 = (signed char)-123;
short var_23 = (short)-18942;
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
