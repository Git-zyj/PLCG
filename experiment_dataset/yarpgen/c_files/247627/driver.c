#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)122;
_Bool var_2 = (_Bool)1;
unsigned int var_6 = 963579523U;
signed char var_7 = (signed char)7;
short var_8 = (short)25937;
signed char var_9 = (signed char)88;
signed char var_16 = (signed char)-112;
int zero = 0;
unsigned int var_17 = 584817551U;
signed char var_18 = (signed char)-83;
void init() {
}

void checksum() {
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
