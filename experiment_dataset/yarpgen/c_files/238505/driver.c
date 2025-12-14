#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20620;
unsigned short var_1 = (unsigned short)24896;
unsigned long long int var_4 = 9431660331490239102ULL;
short var_8 = (short)-77;
unsigned char var_12 = (unsigned char)16;
unsigned long long int var_14 = 9182247639261660237ULL;
int zero = 0;
int var_16 = 947096107;
unsigned char var_17 = (unsigned char)8;
long long int var_18 = 6119287689882990429LL;
signed char var_19 = (signed char)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
