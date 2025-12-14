#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned int var_6 = 2952597834U;
signed char var_7 = (signed char)-14;
unsigned long long int var_11 = 10111892486906023580ULL;
int zero = 0;
int var_17 = -736613248;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)84;
unsigned int var_20 = 82327064U;
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
