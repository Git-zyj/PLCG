#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2031070223;
long long int var_5 = -2253456929907244484LL;
long long int var_6 = -182868334353542415LL;
unsigned long long int var_7 = 9783309472995523579ULL;
_Bool var_12 = (_Bool)1;
int var_13 = 455655919;
int zero = 0;
long long int var_14 = -178556848677040974LL;
unsigned long long int var_15 = 17581876677373835046ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
