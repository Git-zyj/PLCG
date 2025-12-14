#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4094923968U;
int var_2 = -563302412;
int var_5 = 2125010959;
unsigned long long int var_6 = 14819187686346273394ULL;
int var_7 = -92815271;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = -5327557981413524058LL;
unsigned int var_12 = 3227952596U;
signed char var_13 = (signed char)85;
unsigned long long int var_14 = 2660646871838258587ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
