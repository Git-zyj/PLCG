#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2532064321U;
signed char var_2 = (signed char)64;
short var_12 = (short)-4491;
int zero = 0;
short var_14 = (short)1288;
unsigned short var_15 = (unsigned short)9269;
unsigned int var_16 = 1600500368U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
