#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4627853586557733833LL;
signed char var_10 = (signed char)79;
unsigned long long int var_14 = 2938550713589353771ULL;
int zero = 0;
long long int var_16 = -1753527720276911046LL;
unsigned char var_17 = (unsigned char)171;
unsigned short var_18 = (unsigned short)32885;
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
