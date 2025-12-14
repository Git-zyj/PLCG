#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)6393;
unsigned short var_3 = (unsigned short)46625;
unsigned long long int var_4 = 8026744404070205032ULL;
long long int var_5 = -7392503803698310510LL;
unsigned short var_6 = (unsigned short)16831;
unsigned long long int var_7 = 6124697519876558329ULL;
unsigned short var_8 = (unsigned short)13146;
unsigned long long int var_11 = 7805528739854431446ULL;
long long int var_13 = -8879464193738790862LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)14401;
long long int var_16 = -2605761727942477416LL;
unsigned short var_17 = (unsigned short)21570;
long long int var_18 = 3149964277219482764LL;
unsigned short var_19 = (unsigned short)27805;
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
