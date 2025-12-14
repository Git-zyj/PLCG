#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_4 = 3022899494U;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 384482254584150306ULL;
unsigned long long int var_20 = 7178998807310199010ULL;
short var_21 = (short)-16023;
unsigned int var_22 = 2220420056U;
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
