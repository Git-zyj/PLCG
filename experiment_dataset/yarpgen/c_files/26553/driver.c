#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 8208733771494588693ULL;
short var_11 = (short)15692;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 11538727703116837298ULL;
unsigned long long int var_20 = 11990244449867047545ULL;
void init() {
}

void checksum() {
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
