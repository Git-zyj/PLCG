#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5418944491775354525ULL;
unsigned long long int var_4 = 5265777015796868632ULL;
unsigned int var_6 = 353467545U;
int zero = 0;
unsigned int var_10 = 2306204530U;
signed char var_11 = (signed char)89;
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
