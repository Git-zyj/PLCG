#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_6 = 76122053;
unsigned long long int var_7 = 3468966504866928925ULL;
signed char var_9 = (signed char)76;
int zero = 0;
unsigned int var_10 = 580130792U;
signed char var_11 = (signed char)-61;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
