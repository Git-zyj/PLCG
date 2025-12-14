#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)205;
unsigned int var_1 = 1035620673U;
short var_2 = (short)-29836;
unsigned int var_7 = 2876706862U;
unsigned short var_8 = (unsigned short)52986;
unsigned char var_9 = (unsigned char)127;
int zero = 0;
short var_10 = (short)26101;
unsigned char var_11 = (unsigned char)224;
unsigned int var_12 = 3405394022U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
