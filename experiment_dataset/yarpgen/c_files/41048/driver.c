#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4029516213U;
int var_4 = 545604255;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)92;
int zero = 0;
signed char var_13 = (signed char)-109;
unsigned long long int var_14 = 683083787857558126ULL;
long long int var_15 = -2055813757011947211LL;
void init() {
}

void checksum() {
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
