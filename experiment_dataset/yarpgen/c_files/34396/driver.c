#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5907945806496455638LL;
unsigned long long int var_7 = 17843942929100261295ULL;
short var_13 = (short)-1768;
int zero = 0;
long long int var_15 = 1698942624603301693LL;
signed char var_16 = (signed char)2;
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
