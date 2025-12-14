#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_4 = 387070449U;
short var_5 = (short)-23722;
unsigned short var_6 = (unsigned short)44482;
unsigned char var_7 = (unsigned char)53;
unsigned long long int var_9 = 1672169953745854632ULL;
unsigned long long int var_11 = 7649873308035546002ULL;
unsigned int var_12 = 4085542886U;
unsigned int var_13 = 3583922242U;
int zero = 0;
unsigned char var_14 = (unsigned char)57;
short var_15 = (short)6566;
unsigned int var_16 = 642439026U;
short var_17 = (short)30980;
unsigned int var_18 = 677988951U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
