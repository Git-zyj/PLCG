#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1898722870U;
long long int var_6 = -4344059869346738205LL;
unsigned char var_10 = (unsigned char)32;
long long int var_11 = 8535497854612522744LL;
unsigned int var_12 = 1712747715U;
signed char var_15 = (signed char)-90;
int zero = 0;
unsigned char var_16 = (unsigned char)241;
signed char var_17 = (signed char)-75;
signed char var_18 = (signed char)9;
unsigned int var_19 = 2308309986U;
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
