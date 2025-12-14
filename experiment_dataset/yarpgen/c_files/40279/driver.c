#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1988883951;
int var_11 = 1682725007;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1695143147U;
signed char var_15 = (signed char)-70;
int zero = 0;
unsigned char var_19 = (unsigned char)5;
_Bool var_20 = (_Bool)1;
long long int var_21 = 8763407570055540414LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
