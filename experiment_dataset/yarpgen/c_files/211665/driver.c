#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 299993812U;
unsigned long long int var_2 = 15581544113801043946ULL;
unsigned char var_4 = (unsigned char)167;
int var_5 = 818592725;
unsigned short var_10 = (unsigned short)63787;
unsigned int var_11 = 3481265839U;
unsigned char var_12 = (unsigned char)53;
unsigned int var_14 = 2316597735U;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)3307;
unsigned char var_17 = (unsigned char)221;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
