#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -984835589;
unsigned long long int var_4 = 71841337966131556ULL;
unsigned long long int var_7 = 14605466778255613837ULL;
unsigned char var_8 = (unsigned char)104;
int var_10 = -1220306932;
unsigned char var_12 = (unsigned char)101;
unsigned char var_15 = (unsigned char)150;
int zero = 0;
unsigned int var_19 = 383816976U;
unsigned int var_20 = 3881420376U;
unsigned long long int var_21 = 13440454655507631617ULL;
unsigned int var_22 = 3080969602U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
