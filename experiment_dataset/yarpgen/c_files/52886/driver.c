#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7214;
unsigned char var_2 = (unsigned char)222;
unsigned int var_3 = 1933200U;
unsigned int var_5 = 4157323582U;
short var_6 = (short)24150;
_Bool var_7 = (_Bool)0;
int var_8 = 582706151;
int var_9 = 346448277;
short var_10 = (short)10198;
signed char var_12 = (signed char)-87;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)-19;
unsigned char var_15 = (unsigned char)235;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
