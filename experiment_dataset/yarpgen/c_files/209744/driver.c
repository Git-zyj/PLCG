#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)13;
int var_4 = 1290452025;
unsigned long long int var_5 = 7444329159317275070ULL;
signed char var_6 = (signed char)-119;
unsigned int var_8 = 514210366U;
int zero = 0;
unsigned char var_10 = (unsigned char)87;
int var_11 = 498404227;
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
