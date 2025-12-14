#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)3419;
unsigned long long int var_7 = 15073771581035275381ULL;
signed char var_10 = (signed char)110;
unsigned int var_16 = 3664254828U;
int zero = 0;
signed char var_19 = (signed char)-42;
unsigned long long int var_20 = 11797506484840145704ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
