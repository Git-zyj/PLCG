#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
_Bool var_8 = (_Bool)1;
int var_11 = 1334990982;
unsigned char var_14 = (unsigned char)137;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 1795359080U;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-51;
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
