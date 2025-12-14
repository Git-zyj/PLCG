#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1501585198;
unsigned long long int var_2 = 7500110317857878409ULL;
unsigned long long int var_3 = 3695921494690691661ULL;
unsigned char var_7 = (unsigned char)91;
int zero = 0;
unsigned int var_10 = 2500278295U;
unsigned char var_11 = (unsigned char)151;
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
