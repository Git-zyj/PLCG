#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1163851078U;
signed char var_12 = (signed char)35;
unsigned int var_13 = 2263040274U;
int zero = 0;
unsigned short var_15 = (unsigned short)983;
unsigned long long int var_16 = 4395785259138239193ULL;
void init() {
}

void checksum() {
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
