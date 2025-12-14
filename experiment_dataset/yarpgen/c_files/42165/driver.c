#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1164801251;
unsigned long long int var_5 = 7095834057543986782ULL;
int var_6 = -1028816445;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 2643791180554119154ULL;
unsigned long long int var_13 = 5074990379763904530ULL;
unsigned int var_14 = 4108902839U;
unsigned long long int var_15 = 9644116297545371418ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
