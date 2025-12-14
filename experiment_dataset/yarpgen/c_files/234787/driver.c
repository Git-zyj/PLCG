#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -6034042311210920051LL;
unsigned long long int var_8 = 1667206725628068737ULL;
long long int var_10 = 5252091806812241453LL;
int zero = 0;
unsigned long long int var_18 = 2530076144683330048ULL;
unsigned long long int var_19 = 4937123928629306874ULL;
unsigned long long int var_20 = 17222243231916637698ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
