#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)25205;
unsigned short var_8 = (unsigned short)17561;
unsigned long long int var_11 = 2692057846272121332ULL;
int var_12 = 68812140;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 247306472U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
