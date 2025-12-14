#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)190;
long long int var_13 = -5323165844704085050LL;
unsigned long long int var_15 = 8087379393450394009ULL;
int zero = 0;
short var_16 = (short)20036;
unsigned short var_17 = (unsigned short)19905;
signed char var_18 = (signed char)32;
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
