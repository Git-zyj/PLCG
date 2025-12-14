#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 4790421015148962423ULL;
unsigned long long int var_11 = 15483332432768123104ULL;
unsigned short var_14 = (unsigned short)52857;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-18701;
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
