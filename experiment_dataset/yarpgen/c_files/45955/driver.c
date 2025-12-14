#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)111;
long long int var_1 = 8560582738868700851LL;
short var_4 = (short)8756;
unsigned long long int var_7 = 21929691015234982ULL;
int var_13 = -141184866;
int zero = 0;
short var_14 = (short)-3299;
unsigned int var_15 = 4133764909U;
int var_16 = -679941112;
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
