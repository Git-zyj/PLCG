#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3185;
unsigned short var_1 = (unsigned short)10173;
unsigned short var_3 = (unsigned short)29439;
unsigned char var_8 = (unsigned char)129;
short var_13 = (short)3269;
int zero = 0;
signed char var_16 = (signed char)41;
unsigned char var_17 = (unsigned char)183;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
