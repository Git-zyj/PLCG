#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)14019;
unsigned short var_8 = (unsigned short)63311;
_Bool var_11 = (_Bool)1;
unsigned int var_15 = 1241019981U;
int zero = 0;
unsigned int var_16 = 2633247210U;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 3845531259304225335ULL;
int var_19 = -94151927;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
