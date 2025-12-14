#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-41;
unsigned long long int var_2 = 11370446670754537625ULL;
unsigned short var_4 = (unsigned short)14822;
unsigned short var_6 = (unsigned short)7688;
int var_7 = -1658877677;
unsigned char var_8 = (unsigned char)16;
int var_9 = 545708508;
unsigned char var_10 = (unsigned char)19;
int var_12 = -776102623;
int zero = 0;
unsigned long long int var_13 = 15793062965604237204ULL;
unsigned char var_14 = (unsigned char)213;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)80;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
