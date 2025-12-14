#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1180636503158970962ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 399515268U;
int zero = 0;
short var_11 = (short)8811;
signed char var_12 = (signed char)-61;
unsigned short var_13 = (unsigned short)39723;
long long int var_14 = 6753098220576709973LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
