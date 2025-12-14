#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31497;
long long int var_2 = -5519932326069633052LL;
int var_4 = -1191809838;
long long int var_5 = -2077967403548365989LL;
int var_6 = 348613821;
unsigned char var_8 = (unsigned char)82;
int var_11 = 1213386440;
unsigned char var_12 = (unsigned char)84;
int var_14 = 1826067734;
int zero = 0;
long long int var_16 = 6906611116073485121LL;
short var_17 = (short)25004;
long long int var_18 = -2264957296521151817LL;
int var_19 = -293156684;
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
