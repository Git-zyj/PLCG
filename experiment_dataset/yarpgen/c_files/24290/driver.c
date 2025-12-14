#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-36;
unsigned long long int var_5 = 11102584400124771362ULL;
long long int var_11 = -2982778928312619306LL;
unsigned int var_13 = 3365509564U;
int zero = 0;
int var_17 = 604542240;
signed char var_18 = (signed char)-47;
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
