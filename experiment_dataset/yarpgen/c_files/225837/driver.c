#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_3 = (short)-10731;
unsigned char var_4 = (unsigned char)8;
unsigned long long int var_7 = 5790773323226496848ULL;
int var_8 = 1696733742;
int var_14 = -869069607;
unsigned long long int var_15 = 193303340139222963ULL;
int zero = 0;
unsigned int var_16 = 1923816203U;
int var_17 = 747675709;
int var_18 = -2055343194;
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
