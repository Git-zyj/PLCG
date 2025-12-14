#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 686434190U;
int var_6 = 319122387;
_Bool var_9 = (_Bool)0;
unsigned int var_12 = 315182158U;
unsigned char var_13 = (unsigned char)30;
int zero = 0;
int var_15 = -2013181652;
short var_16 = (short)-93;
unsigned long long int var_17 = 24463442801506755ULL;
unsigned long long int var_18 = 15275941806246326403ULL;
unsigned int var_19 = 3033117729U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
