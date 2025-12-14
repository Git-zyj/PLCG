#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8841042931815915504LL;
unsigned int var_6 = 1062205296U;
unsigned long long int var_8 = 10969791550991968070ULL;
int zero = 0;
unsigned int var_12 = 3275736708U;
int var_13 = 40858092;
signed char var_14 = (signed char)76;
int var_15 = 2068954890;
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
