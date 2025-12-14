#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1951216339;
unsigned long long int var_1 = 1191237977380384136ULL;
short var_6 = (short)30030;
int var_8 = -915732749;
signed char var_9 = (signed char)-120;
int var_10 = -1409397678;
int zero = 0;
unsigned long long int var_11 = 17112311609792303258ULL;
unsigned int var_12 = 2660048712U;
unsigned long long int var_13 = 10021083934457441914ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
