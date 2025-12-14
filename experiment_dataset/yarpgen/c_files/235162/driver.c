#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 309927349;
unsigned char var_1 = (unsigned char)64;
signed char var_4 = (signed char)(-127 - 1);
int var_6 = 141193977;
unsigned short var_8 = (unsigned short)57178;
long long int var_10 = 664695008495467414LL;
int var_11 = -925071529;
int var_12 = -130869316;
unsigned char var_13 = (unsigned char)25;
int var_14 = 2141375679;
int var_17 = 1823254280;
int zero = 0;
int var_18 = 2053408071;
short var_19 = (short)29823;
unsigned int var_20 = 553586806U;
int var_21 = 1918032940;
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
