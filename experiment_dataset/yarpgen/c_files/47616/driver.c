#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -831534467;
unsigned int var_15 = 3504820203U;
int var_18 = -16673922;
int zero = 0;
unsigned short var_20 = (unsigned short)18640;
unsigned char var_21 = (unsigned char)96;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
