#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -299433774;
_Bool var_5 = (_Bool)1;
signed char var_16 = (signed char)-9;
unsigned int var_17 = 3140955077U;
int zero = 0;
unsigned int var_19 = 93483366U;
unsigned int var_20 = 853718206U;
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
