#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 994962249;
long long int var_1 = 1546276287551337946LL;
unsigned char var_2 = (unsigned char)33;
unsigned char var_3 = (unsigned char)41;
_Bool var_4 = (_Bool)0;
short var_6 = (short)19105;
unsigned char var_7 = (unsigned char)129;
int var_9 = 344144710;
unsigned int var_10 = 16759417U;
unsigned long long int var_11 = 3617990484588274766ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)18634;
unsigned char var_13 = (unsigned char)141;
long long int var_14 = 4190483866524489747LL;
void init() {
}

void checksum() {
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
