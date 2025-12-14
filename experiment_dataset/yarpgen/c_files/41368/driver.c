#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5526367698602422455LL;
long long int var_2 = -3178322739400652108LL;
signed char var_3 = (signed char)-78;
signed char var_5 = (signed char)34;
signed char var_7 = (signed char)-11;
_Bool var_8 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)-108;
long long int var_11 = -3364501946736850966LL;
signed char var_12 = (signed char)-36;
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
