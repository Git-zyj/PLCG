#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)37282;
unsigned short var_4 = (unsigned short)29360;
unsigned int var_9 = 1426294417U;
short var_10 = (short)8466;
unsigned char var_12 = (unsigned char)244;
short var_15 = (short)21544;
_Bool var_16 = (_Bool)0;
unsigned short var_18 = (unsigned short)4942;
int var_19 = 521438335;
int zero = 0;
int var_20 = 1439412973;
int var_21 = -2098647389;
short var_22 = (short)9244;
unsigned short var_23 = (unsigned short)28057;
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
