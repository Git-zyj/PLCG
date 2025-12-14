#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4153682085U;
int var_10 = 1564764194;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2401088688U;
int zero = 0;
unsigned int var_18 = 718804557U;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)144;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
