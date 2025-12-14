#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)239;
short var_6 = (short)18610;
unsigned short var_11 = (unsigned short)16493;
short var_13 = (short)16972;
unsigned long long int var_14 = 10076178686732779412ULL;
long long int var_15 = -8044184470242077586LL;
int zero = 0;
long long int var_16 = -3932008959719179382LL;
long long int var_17 = -4918310585350283620LL;
unsigned char var_18 = (unsigned char)112;
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
