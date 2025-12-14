#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_5 = (short)-11127;
unsigned long long int var_8 = 5524249277464997353ULL;
signed char var_13 = (signed char)-17;
int zero = 0;
signed char var_18 = (signed char)119;
_Bool var_19 = (_Bool)1;
int var_20 = -1559578930;
int var_21 = -2023494564;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
