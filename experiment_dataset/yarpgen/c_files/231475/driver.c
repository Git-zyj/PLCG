#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)57;
short var_9 = (short)18389;
unsigned long long int var_12 = 8576326860090652976ULL;
short var_14 = (short)17559;
int zero = 0;
unsigned char var_15 = (unsigned char)3;
unsigned int var_16 = 500451658U;
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
