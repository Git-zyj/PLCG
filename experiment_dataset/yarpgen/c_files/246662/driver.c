#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -597662346758159805LL;
int var_2 = -2083080701;
int var_3 = 1787983779;
unsigned int var_5 = 3031772750U;
long long int var_10 = 809048865897085604LL;
unsigned char var_11 = (unsigned char)87;
int zero = 0;
int var_12 = -1487720207;
int var_13 = 388242309;
void init() {
}

void checksum() {
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
