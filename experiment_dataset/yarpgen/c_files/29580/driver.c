#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)88;
unsigned short var_6 = (unsigned short)45097;
signed char var_11 = (signed char)-87;
signed char var_12 = (signed char)68;
short var_14 = (short)-1614;
unsigned int var_16 = 2267449673U;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_19 = (short)-8648;
signed char var_20 = (signed char)-94;
_Bool var_21 = (_Bool)0;
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
