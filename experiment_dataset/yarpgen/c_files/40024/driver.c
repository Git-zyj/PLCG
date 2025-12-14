#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3088987856566807952LL;
_Bool var_1 = (_Bool)0;
_Bool var_4 = (_Bool)1;
int var_5 = -419109994;
unsigned long long int var_11 = 10620442340198668839ULL;
signed char var_12 = (signed char)100;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_20 = 814577661;
unsigned long long int var_21 = 12378312536587535721ULL;
signed char var_22 = (signed char)-83;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
