#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14202;
unsigned short var_3 = (unsigned short)37054;
unsigned char var_4 = (unsigned char)59;
unsigned char var_8 = (unsigned char)22;
int zero = 0;
unsigned char var_10 = (unsigned char)87;
unsigned short var_11 = (unsigned short)20544;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
