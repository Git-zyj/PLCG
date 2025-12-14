#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 9028743675014456925LL;
unsigned long long int var_13 = 8770346117832638736ULL;
unsigned char var_14 = (unsigned char)151;
short var_16 = (short)-22223;
int zero = 0;
unsigned char var_17 = (unsigned char)195;
unsigned long long int var_18 = 11876118839190974788ULL;
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
