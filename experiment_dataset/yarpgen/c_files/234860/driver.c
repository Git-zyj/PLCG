#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)292;
unsigned char var_3 = (unsigned char)144;
unsigned char var_5 = (unsigned char)74;
short var_6 = (short)20422;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-527;
int zero = 0;
signed char var_10 = (signed char)-92;
unsigned char var_11 = (unsigned char)105;
short var_12 = (short)24650;
unsigned int var_13 = 3260708417U;
int var_14 = -1514693709;
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
