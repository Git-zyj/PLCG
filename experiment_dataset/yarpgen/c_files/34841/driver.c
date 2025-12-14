#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 655038706U;
long long int var_7 = -5479249938231506970LL;
unsigned int var_8 = 229391444U;
short var_13 = (short)17736;
unsigned char var_14 = (unsigned char)196;
int zero = 0;
unsigned char var_16 = (unsigned char)166;
unsigned long long int var_17 = 2159542303764564383ULL;
unsigned int var_18 = 588929961U;
unsigned int var_19 = 3774295633U;
unsigned int var_20 = 684292449U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
