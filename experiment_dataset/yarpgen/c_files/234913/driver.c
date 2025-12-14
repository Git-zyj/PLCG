#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)8;
long long int var_17 = -5769219016776052741LL;
short var_18 = (short)-1736;
unsigned int var_19 = 3725456715U;
int zero = 0;
unsigned char var_20 = (unsigned char)124;
signed char var_21 = (signed char)16;
unsigned char var_22 = (unsigned char)75;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
