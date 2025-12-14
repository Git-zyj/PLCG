#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2227286352U;
signed char var_6 = (signed char)57;
short var_11 = (short)20637;
int zero = 0;
unsigned char var_14 = (unsigned char)242;
int var_15 = 902556149;
long long int var_16 = -2854191982327960789LL;
unsigned short var_17 = (unsigned short)28142;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
