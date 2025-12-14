#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26035;
unsigned char var_4 = (unsigned char)2;
unsigned short var_6 = (unsigned short)48562;
signed char var_8 = (signed char)64;
unsigned char var_9 = (unsigned char)206;
unsigned int var_12 = 1775458799U;
int zero = 0;
unsigned int var_17 = 759144540U;
unsigned char var_18 = (unsigned char)129;
void init() {
}

void checksum() {
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
