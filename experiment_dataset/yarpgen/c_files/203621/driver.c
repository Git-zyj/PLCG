#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5028102042146215973ULL;
unsigned int var_7 = 2900258649U;
signed char var_9 = (signed char)6;
unsigned char var_10 = (unsigned char)160;
int zero = 0;
short var_17 = (short)-5923;
short var_18 = (short)7658;
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
