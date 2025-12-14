#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_5 = 15097279157008942673ULL;
int var_6 = -1306850694;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)252;
signed char var_13 = (signed char)-13;
unsigned int var_14 = 1286970310U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
