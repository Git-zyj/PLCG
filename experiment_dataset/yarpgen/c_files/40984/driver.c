#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned long long int var_7 = 12697704427578684175ULL;
unsigned long long int var_8 = 11223285117084374785ULL;
unsigned char var_9 = (unsigned char)68;
signed char var_13 = (signed char)41;
int zero = 0;
unsigned char var_15 = (unsigned char)153;
unsigned char var_16 = (unsigned char)212;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
