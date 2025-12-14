#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)224;
unsigned short var_7 = (unsigned short)55408;
unsigned char var_9 = (unsigned char)30;
short var_11 = (short)16384;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)51;
int zero = 0;
unsigned char var_19 = (unsigned char)173;
unsigned int var_20 = 3611381922U;
unsigned long long int var_21 = 15590532109532093091ULL;
void init() {
}

void checksum() {
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
