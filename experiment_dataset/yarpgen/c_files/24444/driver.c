#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_6 = -51517186;
unsigned short var_14 = (unsigned short)48024;
int zero = 0;
unsigned short var_18 = (unsigned short)47858;
unsigned long long int var_19 = 1912358956243148390ULL;
signed char var_20 = (signed char)-5;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
