#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1524304334562816576LL;
signed char var_2 = (signed char)-89;
signed char var_3 = (signed char)-116;
signed char var_6 = (signed char)-36;
long long int var_7 = -6008871723705841311LL;
int zero = 0;
unsigned long long int var_11 = 4664026969429491136ULL;
long long int var_12 = -1907443789340519781LL;
void init() {
}

void checksum() {
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
