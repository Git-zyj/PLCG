#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 704741811;
unsigned char var_4 = (unsigned char)26;
unsigned char var_5 = (unsigned char)154;
short var_7 = (short)8024;
unsigned short var_8 = (unsigned short)62007;
long long int var_10 = -7250011795284075214LL;
_Bool var_12 = (_Bool)1;
long long int var_13 = -833681050394734694LL;
unsigned int var_14 = 524753157U;
short var_15 = (short)6405;
int zero = 0;
int var_16 = 1920402525;
short var_17 = (short)9685;
short var_18 = (short)-13279;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
