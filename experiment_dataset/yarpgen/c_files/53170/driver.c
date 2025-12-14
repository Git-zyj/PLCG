#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3585537073U;
unsigned int var_5 = 1249856293U;
unsigned int var_7 = 449067608U;
unsigned long long int var_9 = 15403639590193790881ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)43850;
unsigned short var_11 = (unsigned short)1631;
unsigned long long int var_12 = 17541219464504139483ULL;
unsigned int var_13 = 4097239686U;
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
