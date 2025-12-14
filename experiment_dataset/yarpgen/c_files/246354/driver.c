#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 126934507U;
long long int var_4 = -4573075772843768261LL;
signed char var_8 = (signed char)32;
unsigned long long int var_9 = 14483982271900258590ULL;
unsigned short var_10 = (unsigned short)37357;
int zero = 0;
signed char var_16 = (signed char)(-127 - 1);
signed char var_17 = (signed char)63;
void init() {
}

void checksum() {
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
