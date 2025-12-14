#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13855773906592087272ULL;
unsigned int var_5 = 1583406388U;
unsigned char var_12 = (unsigned char)53;
signed char var_14 = (signed char)97;
unsigned long long int var_15 = 6891871386933380190ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)23997;
unsigned int var_20 = 3319475705U;
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
