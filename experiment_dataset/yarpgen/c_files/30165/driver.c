#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -7915563;
signed char var_5 = (signed char)-113;
_Bool var_7 = (_Bool)1;
int zero = 0;
int var_10 = 666921958;
unsigned char var_11 = (unsigned char)56;
unsigned long long int var_12 = 903963018754211616ULL;
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
