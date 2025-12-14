#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)19;
long long int var_1 = -8298816428782022602LL;
int var_2 = -1516761653;
unsigned int var_7 = 3025133175U;
int zero = 0;
signed char var_18 = (signed char)75;
int var_19 = -1644365252;
unsigned char var_20 = (unsigned char)143;
signed char var_21 = (signed char)93;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
