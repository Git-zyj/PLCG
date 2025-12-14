#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned int var_5 = 2010247093U;
unsigned short var_7 = (unsigned short)18342;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 4198140581U;
unsigned int var_11 = 619507146U;
_Bool var_13 = (_Bool)0;
unsigned short var_16 = (unsigned short)22981;
unsigned int var_19 = 1893756754U;
int zero = 0;
unsigned long long int var_20 = 11723558097031904113ULL;
unsigned char var_21 = (unsigned char)25;
unsigned char var_22 = (unsigned char)222;
short var_23 = (short)-23729;
void init() {
}

void checksum() {
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
