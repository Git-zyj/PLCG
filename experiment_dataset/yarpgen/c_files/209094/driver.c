#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 10956252801893571336ULL;
unsigned int var_4 = 1996043838U;
long long int var_6 = 42931532096481378LL;
unsigned int var_11 = 4027091518U;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 3850989489U;
unsigned short var_17 = (unsigned short)23582;
int var_18 = -661733385;
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
