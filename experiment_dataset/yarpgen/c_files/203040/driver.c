#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 280933817U;
int var_4 = 1879208850;
int var_6 = -1550422772;
_Bool var_8 = (_Bool)0;
signed char var_12 = (signed char)94;
unsigned short var_13 = (unsigned short)54635;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 13153533874948609553ULL;
unsigned int var_16 = 3481918654U;
int var_17 = 2039510187;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
