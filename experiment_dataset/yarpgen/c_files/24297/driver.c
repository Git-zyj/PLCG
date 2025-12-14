#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-102;
long long int var_5 = -1822773473086020207LL;
unsigned int var_12 = 3904787039U;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 16938176321485225626ULL;
void init() {
}

void checksum() {
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
