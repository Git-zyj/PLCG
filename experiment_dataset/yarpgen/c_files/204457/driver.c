#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)88;
unsigned int var_3 = 3869517993U;
signed char var_9 = (signed char)-60;
unsigned int var_10 = 1897606868U;
unsigned int var_12 = 3075078641U;
int zero = 0;
signed char var_13 = (signed char)11;
signed char var_14 = (signed char)-81;
void init() {
}

void checksum() {
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
