#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_5 = (signed char)43;
signed char var_14 = (signed char)-20;
unsigned char var_15 = (unsigned char)81;
int zero = 0;
unsigned char var_19 = (unsigned char)32;
unsigned char var_20 = (unsigned char)221;
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
