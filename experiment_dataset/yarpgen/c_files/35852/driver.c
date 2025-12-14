#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)1;
signed char var_1 = (signed char)4;
unsigned int var_4 = 671171655U;
unsigned char var_11 = (unsigned char)163;
int zero = 0;
short var_12 = (short)2309;
unsigned char var_13 = (unsigned char)78;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
