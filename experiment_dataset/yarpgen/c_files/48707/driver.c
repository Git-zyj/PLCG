#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44166;
unsigned int var_1 = 1268703586U;
unsigned long long int var_3 = 10697193150415024236ULL;
unsigned long long int var_4 = 7540245910240343580ULL;
unsigned short var_11 = (unsigned short)24394;
unsigned long long int var_13 = 11183107422158502984ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 3295783878U;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
