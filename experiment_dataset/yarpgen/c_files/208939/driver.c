#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-16455;
unsigned char var_5 = (unsigned char)204;
signed char var_12 = (signed char)-71;
int zero = 0;
int var_13 = 1183672594;
signed char var_14 = (signed char)-55;
long long int var_15 = -8830661448684108615LL;
unsigned int var_16 = 1682642617U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
