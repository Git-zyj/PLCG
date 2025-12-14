#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)172;
unsigned char var_5 = (unsigned char)43;
unsigned int var_7 = 4006215941U;
unsigned long long int var_8 = 12701004523252322282ULL;
int zero = 0;
unsigned long long int var_12 = 9544928905226652707ULL;
signed char var_13 = (signed char)98;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
long long int var_16 = -8721207651991900166LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
