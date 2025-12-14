#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned int var_11 = 2078162071U;
unsigned long long int var_12 = 14809295010135034877ULL;
unsigned char var_15 = (unsigned char)173;
int zero = 0;
long long int var_17 = -6351192428412315599LL;
signed char var_18 = (signed char)-16;
void init() {
}

void checksum() {
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
