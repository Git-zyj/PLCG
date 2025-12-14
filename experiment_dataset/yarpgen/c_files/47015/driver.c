#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 916358611;
unsigned char var_3 = (unsigned char)208;
int var_5 = 383761541;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3144426210U;
int var_22 = 2101838275;
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
