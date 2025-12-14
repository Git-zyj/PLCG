#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_3 = 547445542;
unsigned char var_4 = (unsigned char)8;
long long int var_7 = 9001692476056989317LL;
int var_11 = 241142249;
long long int var_14 = -504920586452994489LL;
int zero = 0;
long long int var_16 = 8237493976277913654LL;
unsigned char var_17 = (unsigned char)212;
unsigned char var_18 = (unsigned char)227;
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
