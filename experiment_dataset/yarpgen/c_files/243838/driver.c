#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4975232444859175226ULL;
unsigned int var_1 = 1912779185U;
unsigned char var_2 = (unsigned char)246;
unsigned long long int var_3 = 4761214013025513518ULL;
int var_4 = -1079982665;
unsigned long long int var_8 = 17997273493540856483ULL;
unsigned int var_10 = 1215814159U;
int zero = 0;
unsigned int var_11 = 1745286885U;
unsigned long long int var_12 = 12421024887179160895ULL;
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
