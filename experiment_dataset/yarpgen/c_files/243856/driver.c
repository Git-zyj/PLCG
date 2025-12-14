#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55323;
unsigned int var_4 = 2572733645U;
short var_7 = (short)-22497;
int zero = 0;
unsigned long long int var_13 = 7154117582801425708ULL;
unsigned int var_14 = 432067739U;
short var_15 = (short)9675;
int var_16 = -646575993;
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
