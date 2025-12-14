#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 145654620U;
unsigned short var_5 = (unsigned short)34084;
unsigned short var_11 = (unsigned short)20332;
int zero = 0;
unsigned char var_12 = (unsigned char)128;
unsigned short var_13 = (unsigned short)10281;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
