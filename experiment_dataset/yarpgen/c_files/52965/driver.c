#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
int var_5 = 1031933776;
unsigned char var_11 = (unsigned char)212;
signed char var_12 = (signed char)38;
long long int var_15 = 6571900010614022464LL;
unsigned char var_16 = (unsigned char)19;
long long int var_17 = -5584665905611840908LL;
signed char var_19 = (signed char)-100;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)214;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
