#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2521054822U;
unsigned int var_5 = 1815226727U;
int var_6 = 609633627;
unsigned short var_7 = (unsigned short)43821;
signed char var_10 = (signed char)23;
int zero = 0;
unsigned int var_14 = 2747577281U;
int var_15 = -984923997;
unsigned char var_16 = (unsigned char)23;
void init() {
}

void checksum() {
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
