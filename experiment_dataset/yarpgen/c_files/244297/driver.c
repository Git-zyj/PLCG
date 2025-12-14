#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -397322886;
signed char var_8 = (signed char)26;
unsigned short var_9 = (unsigned short)19923;
short var_10 = (short)-23476;
short var_12 = (short)20481;
int zero = 0;
long long int var_13 = -5760011137852262673LL;
unsigned short var_14 = (unsigned short)53538;
long long int var_15 = -2521029213645461626LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
