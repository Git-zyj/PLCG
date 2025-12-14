#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)227;
signed char var_2 = (signed char)35;
unsigned short var_3 = (unsigned short)4965;
unsigned int var_5 = 4160697613U;
unsigned short var_9 = (unsigned short)60004;
unsigned int var_12 = 1596810035U;
unsigned long long int var_13 = 3118228434660883992ULL;
int zero = 0;
long long int var_14 = -8063547435941024617LL;
short var_15 = (short)-13798;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
