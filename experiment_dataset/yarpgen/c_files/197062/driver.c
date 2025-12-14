#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)173;
unsigned char var_9 = (unsigned char)100;
unsigned char var_13 = (unsigned char)102;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)227;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 14022776580843634300ULL;
unsigned long long int var_23 = 6308468834370667634ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
