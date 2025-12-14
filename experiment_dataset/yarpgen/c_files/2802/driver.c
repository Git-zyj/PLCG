#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)75;
unsigned short var_2 = (unsigned short)26639;
int var_3 = -21358506;
unsigned short var_6 = (unsigned short)6988;
unsigned char var_7 = (unsigned char)87;
unsigned short var_9 = (unsigned short)26088;
unsigned int var_10 = 1467524132U;
int zero = 0;
int var_14 = -683968691;
short var_15 = (short)-29123;
signed char var_16 = (signed char)72;
unsigned short var_17 = (unsigned short)43075;
short var_18 = (short)-19257;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
