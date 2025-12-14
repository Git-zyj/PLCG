#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)1927;
_Bool var_5 = (_Bool)0;
signed char var_8 = (signed char)54;
_Bool var_11 = (_Bool)0;
unsigned short var_13 = (unsigned short)19865;
int zero = 0;
unsigned char var_18 = (unsigned char)123;
signed char var_19 = (signed char)-105;
short var_20 = (short)-17278;
signed char var_21 = (signed char)75;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
