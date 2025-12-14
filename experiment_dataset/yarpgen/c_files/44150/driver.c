#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_12 = (_Bool)1;
unsigned int var_18 = 2033781058U;
int var_19 = 1930190246;
int zero = 0;
unsigned char var_20 = (unsigned char)237;
int var_21 = -1231861691;
unsigned char var_22 = (unsigned char)207;
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
