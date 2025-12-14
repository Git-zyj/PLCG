#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3207218224282698540LL;
signed char var_2 = (signed char)-43;
int zero = 0;
unsigned long long int var_10 = 10524935595181184686ULL;
signed char var_11 = (signed char)120;
unsigned long long int var_12 = 6809309656204102335ULL;
signed char var_13 = (signed char)-6;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
