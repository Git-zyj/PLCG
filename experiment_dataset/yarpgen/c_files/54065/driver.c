#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5656861867845598226LL;
unsigned char var_1 = (unsigned char)170;
unsigned short var_2 = (unsigned short)64974;
signed char var_5 = (signed char)69;
signed char var_6 = (signed char)51;
unsigned char var_8 = (unsigned char)4;
unsigned short var_13 = (unsigned short)34239;
int zero = 0;
signed char var_15 = (signed char)1;
unsigned char var_16 = (unsigned char)188;
void init() {
}

void checksum() {
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
