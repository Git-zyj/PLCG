#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)171;
unsigned char var_4 = (unsigned char)119;
long long int var_5 = -8740861287796339826LL;
unsigned char var_9 = (unsigned char)190;
unsigned short var_10 = (unsigned short)46761;
long long int var_11 = -3140574586152388201LL;
unsigned short var_13 = (unsigned short)16919;
short var_14 = (short)2396;
int zero = 0;
unsigned char var_15 = (unsigned char)168;
int var_16 = 1150030811;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)222;
short var_19 = (short)5868;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
