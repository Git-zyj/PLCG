#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4576917691089606373LL;
unsigned long long int var_1 = 3256767050634602329ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 1432930070U;
int var_7 = -406555062;
unsigned char var_9 = (unsigned char)93;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)16793;
unsigned long long int var_12 = 14192334129809656492ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
