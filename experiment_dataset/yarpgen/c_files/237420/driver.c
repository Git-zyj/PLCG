#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned char var_7 = (unsigned char)42;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 159807655U;
unsigned long long int var_10 = 12975349587934035365ULL;
int zero = 0;
signed char var_12 = (signed char)-94;
unsigned char var_13 = (unsigned char)70;
signed char var_14 = (signed char)-60;
unsigned char var_15 = (unsigned char)131;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
