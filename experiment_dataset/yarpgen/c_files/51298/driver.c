#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-70;
unsigned short var_9 = (unsigned short)24980;
unsigned int var_17 = 3169020760U;
short var_18 = (short)-4225;
int zero = 0;
short var_20 = (short)-28396;
unsigned int var_21 = 2894042162U;
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
