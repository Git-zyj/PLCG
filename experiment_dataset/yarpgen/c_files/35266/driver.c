#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1304448482026489702LL;
_Bool var_2 = (_Bool)1;
int var_4 = 593041647;
signed char var_5 = (signed char)88;
unsigned char var_7 = (unsigned char)225;
long long int var_8 = -6953929603039249654LL;
unsigned char var_10 = (unsigned char)109;
int zero = 0;
short var_11 = (short)-3500;
unsigned long long int var_12 = 8505590605344495618ULL;
short var_13 = (short)-21616;
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
