#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)30295;
unsigned int var_3 = 4152728626U;
unsigned char var_6 = (unsigned char)65;
long long int var_9 = -2208550561091727893LL;
_Bool var_11 = (_Bool)1;
long long int var_12 = -2013098810149086716LL;
int var_15 = -1645671831;
int zero = 0;
short var_16 = (short)-9010;
unsigned long long int var_17 = 10762932118838453527ULL;
unsigned char var_18 = (unsigned char)103;
int var_19 = -1872117350;
void init() {
}

void checksum() {
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
