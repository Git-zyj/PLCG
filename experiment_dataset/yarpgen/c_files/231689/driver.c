#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7375;
int var_6 = -305166416;
unsigned char var_7 = (unsigned char)63;
short var_11 = (short)-20111;
unsigned long long int var_12 = 8389552051744158703ULL;
unsigned short var_13 = (unsigned short)6988;
short var_16 = (short)-17609;
int zero = 0;
unsigned int var_17 = 161323685U;
short var_18 = (short)-22120;
unsigned long long int var_19 = 17868035220029482381ULL;
void init() {
}

void checksum() {
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
