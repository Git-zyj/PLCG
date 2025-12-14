#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)0;
unsigned short var_10 = (unsigned short)12241;
unsigned long long int var_15 = 3599000761114120648ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)212;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)6457;
unsigned long long int var_20 = 1272874928935047074ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
