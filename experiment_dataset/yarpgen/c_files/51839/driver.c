#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)48388;
unsigned long long int var_9 = 6910399307256924609ULL;
int zero = 0;
int var_10 = 765610148;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)93;
signed char var_13 = (signed char)3;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
