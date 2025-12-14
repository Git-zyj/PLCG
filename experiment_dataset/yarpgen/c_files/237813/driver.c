#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1914720091;
unsigned int var_2 = 1469288666U;
unsigned char var_3 = (unsigned char)20;
long long int var_8 = 8253145565484653217LL;
int var_12 = -1577660716;
unsigned char var_14 = (unsigned char)254;
unsigned long long int var_16 = 17077071752110422566ULL;
int zero = 0;
unsigned int var_17 = 436757915U;
unsigned long long int var_18 = 13608013870196089472ULL;
unsigned char var_19 = (unsigned char)47;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
