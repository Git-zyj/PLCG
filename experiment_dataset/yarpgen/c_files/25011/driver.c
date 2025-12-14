#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)45;
unsigned long long int var_8 = 9739656732481783394ULL;
long long int var_9 = 5523529949522949283LL;
int zero = 0;
unsigned long long int var_16 = 5717606356108997036ULL;
short var_17 = (short)-31915;
signed char var_18 = (signed char)112;
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
