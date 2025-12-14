#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17991216091742524134ULL;
unsigned int var_4 = 3352562374U;
long long int var_6 = 8237434865382632930LL;
signed char var_7 = (signed char)-32;
unsigned int var_9 = 3246298405U;
int var_10 = -1949379940;
int zero = 0;
short var_11 = (short)-26541;
unsigned int var_12 = 694107318U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
