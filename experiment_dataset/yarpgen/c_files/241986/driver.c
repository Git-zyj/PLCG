#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)22;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 983690811U;
unsigned long long int var_5 = 14056412468352120362ULL;
unsigned long long int var_6 = 16967086442279467125ULL;
_Bool var_7 = (_Bool)1;
unsigned int var_10 = 831647853U;
unsigned long long int var_11 = 18277379341137556799ULL;
unsigned char var_13 = (unsigned char)88;
int zero = 0;
signed char var_14 = (signed char)0;
unsigned char var_15 = (unsigned char)51;
signed char var_16 = (signed char)101;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
