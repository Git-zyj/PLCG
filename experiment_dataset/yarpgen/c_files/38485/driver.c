#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55540;
unsigned long long int var_4 = 3786416618389308248ULL;
unsigned long long int var_5 = 569412365223638305ULL;
int var_8 = 2039269084;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 2106608979U;
unsigned short var_12 = (unsigned short)10058;
unsigned int var_13 = 166146002U;
void init() {
}

void checksum() {
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
