#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
long long int var_12 = 6898975894335309640LL;
unsigned long long int var_13 = 11391929382020011286ULL;
unsigned int var_14 = 61369988U;
unsigned long long int var_15 = 16999725097717924465ULL;
unsigned long long int var_16 = 1447115961868030411ULL;
unsigned char var_17 = (unsigned char)77;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
