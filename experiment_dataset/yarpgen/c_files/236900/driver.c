#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)197;
unsigned int var_2 = 2660659478U;
signed char var_6 = (signed char)89;
unsigned long long int var_8 = 2402013702434160105ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)46;
short var_19 = (short)-32215;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
