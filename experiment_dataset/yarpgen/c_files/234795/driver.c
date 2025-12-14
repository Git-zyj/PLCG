#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)116;
_Bool var_13 = (_Bool)0;
signed char var_16 = (signed char)-119;
int zero = 0;
signed char var_20 = (signed char)-46;
int var_21 = -956587475;
unsigned char var_22 = (unsigned char)239;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
