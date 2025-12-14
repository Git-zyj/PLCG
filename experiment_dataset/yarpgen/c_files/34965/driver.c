#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)78;
unsigned long long int var_5 = 17838463183355743066ULL;
unsigned int var_6 = 259416179U;
signed char var_10 = (signed char)11;
int zero = 0;
unsigned char var_19 = (unsigned char)120;
int var_20 = 1840030634;
unsigned long long int var_21 = 8694434464926528477ULL;
unsigned char var_22 = (unsigned char)75;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
