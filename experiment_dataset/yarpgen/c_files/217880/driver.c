#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1991348821;
_Bool var_10 = (_Bool)0;
signed char var_17 = (signed char)-36;
int zero = 0;
long long int var_20 = 1542502954072347728LL;
unsigned long long int var_21 = 11766627389124486096ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
