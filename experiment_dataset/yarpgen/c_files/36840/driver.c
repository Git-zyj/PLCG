#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13683398032967142575ULL;
short var_2 = (short)-21759;
_Bool var_5 = (_Bool)0;
short var_10 = (short)11340;
int zero = 0;
long long int var_11 = -1130763481297016296LL;
short var_12 = (short)28452;
unsigned long long int var_13 = 12126900415598788055ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
