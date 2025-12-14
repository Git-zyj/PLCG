#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)29942;
unsigned int var_11 = 4196483557U;
short var_16 = (short)-13988;
int zero = 0;
unsigned short var_18 = (unsigned short)20248;
long long int var_19 = -5579326094222120170LL;
unsigned int var_20 = 2756238709U;
void init() {
}

void checksum() {
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
