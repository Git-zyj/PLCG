#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 955122160580365346LL;
long long int var_4 = -6317967644662629237LL;
signed char var_10 = (signed char)-100;
unsigned int var_11 = 3236624887U;
int zero = 0;
signed char var_19 = (signed char)31;
long long int var_20 = 2928500934783044766LL;
unsigned int var_21 = 1190001889U;
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
