#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10145841911073853209ULL;
unsigned short var_4 = (unsigned short)15340;
signed char var_5 = (signed char)-75;
int var_6 = 1542538716;
int var_9 = 858121925;
int zero = 0;
unsigned int var_10 = 1505268456U;
unsigned long long int var_11 = 7839917846636918154ULL;
int var_12 = -1586516340;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
