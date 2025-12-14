#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)90;
signed char var_2 = (signed char)113;
unsigned char var_6 = (unsigned char)175;
int zero = 0;
unsigned char var_15 = (unsigned char)9;
unsigned int var_16 = 1493889288U;
_Bool var_17 = (_Bool)0;
int var_18 = -293962709;
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
