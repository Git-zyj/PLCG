#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)75;
signed char var_6 = (signed char)116;
unsigned long long int var_8 = 1604807732267543962ULL;
unsigned long long int var_12 = 10573093386351632228ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_18 = 767713171;
int var_19 = -2137863413;
short var_20 = (short)-2664;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
