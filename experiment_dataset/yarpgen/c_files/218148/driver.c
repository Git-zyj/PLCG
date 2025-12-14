#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 453904332;
_Bool var_6 = (_Bool)0;
unsigned char var_10 = (unsigned char)137;
signed char var_12 = (signed char)4;
signed char var_15 = (signed char)32;
short var_16 = (short)29480;
signed char var_17 = (signed char)27;
int zero = 0;
unsigned int var_18 = 1498748261U;
int var_19 = -566556640;
void init() {
}

void checksum() {
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
