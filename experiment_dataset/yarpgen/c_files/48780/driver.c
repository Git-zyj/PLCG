#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-65;
unsigned long long int var_3 = 15621903336613653761ULL;
unsigned long long int var_7 = 5338587861181437456ULL;
unsigned int var_11 = 1618885534U;
long long int var_14 = 7094269882454124154LL;
unsigned long long int var_15 = 12348530319852633403ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)147;
int var_18 = 459773043;
int var_19 = -1002681134;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
