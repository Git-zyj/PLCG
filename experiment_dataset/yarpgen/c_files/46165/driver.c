#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18084;
short var_2 = (short)405;
unsigned short var_4 = (unsigned short)60661;
short var_10 = (short)29019;
unsigned char var_11 = (unsigned char)89;
int var_12 = -921504679;
int zero = 0;
short var_16 = (short)25790;
long long int var_17 = 3591336419129139620LL;
signed char var_18 = (signed char)90;
void init() {
}

void checksum() {
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
