#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53403;
unsigned char var_3 = (unsigned char)189;
int var_5 = 1636767227;
int var_8 = -275728040;
unsigned short var_9 = (unsigned short)49005;
int var_11 = 2040748045;
unsigned short var_12 = (unsigned short)56498;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)8066;
unsigned char var_18 = (unsigned char)253;
unsigned char var_19 = (unsigned char)213;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)28559;
unsigned char var_22 = (unsigned char)120;
unsigned char var_23 = (unsigned char)128;
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
