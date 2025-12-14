#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29598;
short var_3 = (short)-29196;
short var_11 = (short)24519;
unsigned short var_15 = (unsigned short)36058;
unsigned short var_18 = (unsigned short)18816;
int zero = 0;
unsigned char var_20 = (unsigned char)205;
short var_21 = (short)27530;
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
