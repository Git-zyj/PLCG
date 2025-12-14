#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6474538239059619929LL;
unsigned char var_3 = (unsigned char)33;
unsigned long long int var_5 = 5217811848643348924ULL;
unsigned int var_8 = 3248343233U;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_14 = 4830291745926317917LL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
