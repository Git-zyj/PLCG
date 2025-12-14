#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 20845111061164324ULL;
unsigned int var_6 = 1849388558U;
long long int var_9 = 2424295113500091650LL;
unsigned short var_13 = (unsigned short)16308;
int zero = 0;
signed char var_17 = (signed char)76;
unsigned short var_18 = (unsigned short)18289;
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
