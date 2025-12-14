#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3579037844U;
signed char var_11 = (signed char)49;
signed char var_14 = (signed char)95;
int zero = 0;
unsigned int var_20 = 2398850575U;
unsigned int var_21 = 1384762907U;
signed char var_22 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
