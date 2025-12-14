#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13781449428582667710ULL;
unsigned int var_3 = 311261273U;
_Bool var_4 = (_Bool)1;
int var_6 = -879076759;
int zero = 0;
signed char var_12 = (signed char)81;
long long int var_13 = -5916915207694074487LL;
unsigned char var_14 = (unsigned char)150;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
