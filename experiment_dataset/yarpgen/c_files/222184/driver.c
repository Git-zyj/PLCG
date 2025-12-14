#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)21301;
unsigned long long int var_10 = 280775339686554089ULL;
short var_11 = (short)19153;
unsigned short var_12 = (unsigned short)22299;
int zero = 0;
signed char var_16 = (signed char)106;
unsigned char var_17 = (unsigned char)107;
unsigned short var_18 = (unsigned short)29571;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
