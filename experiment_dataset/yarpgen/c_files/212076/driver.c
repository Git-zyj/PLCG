#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-26933;
long long int var_11 = 4864019308355680815LL;
unsigned long long int var_12 = 6213027861700348358ULL;
int zero = 0;
unsigned int var_14 = 308768487U;
unsigned char var_15 = (unsigned char)82;
unsigned char var_16 = (unsigned char)79;
short var_17 = (short)-18217;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
