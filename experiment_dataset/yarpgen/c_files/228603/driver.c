#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)57177;
signed char var_12 = (signed char)13;
int var_14 = 673118948;
int zero = 0;
signed char var_15 = (signed char)16;
signed char var_16 = (signed char)11;
unsigned long long int var_17 = 1041010334271311861ULL;
unsigned char var_18 = (unsigned char)226;
unsigned long long int var_19 = 6185841769809753718ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
