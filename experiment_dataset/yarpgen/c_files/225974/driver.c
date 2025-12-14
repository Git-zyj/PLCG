#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12505;
short var_4 = (short)30467;
signed char var_6 = (signed char)-94;
unsigned long long int var_7 = 10849558275043162723ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = -2081079914;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
