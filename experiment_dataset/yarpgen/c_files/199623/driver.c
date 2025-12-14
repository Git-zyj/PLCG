#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_7 = 2034121642;
unsigned long long int var_8 = 14674620540368009072ULL;
int zero = 0;
unsigned int var_10 = 2117135285U;
unsigned char var_11 = (unsigned char)234;
int var_12 = -680748715;
unsigned char var_13 = (unsigned char)245;
short var_14 = (short)-13366;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
