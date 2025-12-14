#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 596497195U;
unsigned int var_11 = 3659229051U;
int var_12 = 221860720;
_Bool var_14 = (_Bool)0;
int var_17 = 976844207;
int zero = 0;
signed char var_19 = (signed char)-88;
unsigned int var_20 = 2964759426U;
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
