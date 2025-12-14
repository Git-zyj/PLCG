#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_10 = (signed char)106;
unsigned char var_11 = (unsigned char)5;
unsigned char var_12 = (unsigned char)86;
int zero = 0;
int var_13 = 574599584;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 13435816681070950586ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
