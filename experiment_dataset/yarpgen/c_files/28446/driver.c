#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1167050187U;
unsigned char var_4 = (unsigned char)210;
unsigned char var_5 = (unsigned char)19;
unsigned int var_6 = 1566756679U;
signed char var_13 = (signed char)1;
int zero = 0;
unsigned int var_14 = 3913131537U;
unsigned char var_15 = (unsigned char)101;
unsigned short var_16 = (unsigned short)41980;
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
