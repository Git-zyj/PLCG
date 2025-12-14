#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7721702595466743365ULL;
unsigned int var_14 = 991050685U;
unsigned int var_17 = 1356830268U;
long long int var_18 = -6817577682953203403LL;
int zero = 0;
unsigned int var_19 = 238058798U;
unsigned char var_20 = (unsigned char)149;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
