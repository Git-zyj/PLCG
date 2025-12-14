#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -265303698;
unsigned long long int var_10 = 14396205462120071503ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)44;
unsigned long long int var_19 = 4737687425117212680ULL;
int var_20 = -933792111;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
