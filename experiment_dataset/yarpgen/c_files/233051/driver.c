#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 980930049U;
short var_6 = (short)-1958;
unsigned long long int var_7 = 17925970475954415392ULL;
short var_10 = (short)24983;
int zero = 0;
long long int var_11 = 1484789739106466869LL;
unsigned long long int var_12 = 14985254220996843104ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
