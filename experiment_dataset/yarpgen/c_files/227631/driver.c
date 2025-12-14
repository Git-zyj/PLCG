#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3949870065U;
unsigned char var_6 = (unsigned char)113;
signed char var_14 = (signed char)32;
int zero = 0;
long long int var_15 = 236237527440875568LL;
unsigned short var_16 = (unsigned short)30342;
unsigned char var_17 = (unsigned char)92;
int var_18 = -493600889;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
