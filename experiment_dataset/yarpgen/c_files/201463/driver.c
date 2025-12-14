#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_3 = (signed char)-9;
unsigned int var_4 = 2623149957U;
signed char var_10 = (signed char)92;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 4839138764072521930ULL;
long long int var_16 = -4034023838306268665LL;
int zero = 0;
signed char var_17 = (signed char)27;
unsigned char var_18 = (unsigned char)50;
int var_19 = 1925510558;
unsigned char var_20 = (unsigned char)147;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
