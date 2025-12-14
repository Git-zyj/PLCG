#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1284397111;
signed char var_8 = (signed char)96;
unsigned short var_11 = (unsigned short)17876;
int zero = 0;
signed char var_16 = (signed char)-33;
unsigned int var_17 = 1200204956U;
unsigned int var_18 = 1056401913U;
void init() {
}

void checksum() {
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
