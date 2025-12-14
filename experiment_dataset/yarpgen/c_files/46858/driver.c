#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)252;
unsigned char var_3 = (unsigned char)144;
unsigned short var_9 = (unsigned short)5355;
unsigned char var_10 = (unsigned char)131;
int zero = 0;
unsigned char var_13 = (unsigned char)9;
unsigned char var_14 = (unsigned char)242;
int var_15 = -275188837;
long long int var_16 = -5570913754113308071LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
