#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5661090186265799946LL;
signed char var_10 = (signed char)-114;
_Bool var_13 = (_Bool)1;
unsigned char var_17 = (unsigned char)237;
int zero = 0;
unsigned char var_19 = (unsigned char)250;
int var_20 = -470639571;
unsigned long long int var_21 = 16831794565590847309ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
