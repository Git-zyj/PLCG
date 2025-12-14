#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6423877960926816545LL;
int var_10 = 1955591749;
unsigned int var_12 = 1909257545U;
unsigned short var_13 = (unsigned short)59153;
unsigned int var_16 = 1799855713U;
unsigned short var_17 = (unsigned short)48346;
int zero = 0;
signed char var_20 = (signed char)116;
short var_21 = (short)-383;
short var_22 = (short)20642;
unsigned char var_23 = (unsigned char)57;
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
