#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6297537787689411898LL;
long long int var_3 = -3608395268167628208LL;
unsigned long long int var_7 = 2890075618253873756ULL;
unsigned long long int var_10 = 5063503952112237823ULL;
short var_11 = (short)-15047;
int zero = 0;
long long int var_12 = -7014011929208272452LL;
unsigned char var_13 = (unsigned char)240;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
