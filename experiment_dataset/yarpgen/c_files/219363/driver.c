#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)250;
unsigned char var_3 = (unsigned char)158;
unsigned int var_5 = 2634430908U;
int var_7 = 1533454634;
_Bool var_8 = (_Bool)1;
unsigned int var_13 = 3149038923U;
int zero = 0;
unsigned long long int var_14 = 3560295604368021088ULL;
_Bool var_15 = (_Bool)1;
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
