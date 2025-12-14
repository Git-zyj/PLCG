#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1506167479649225782ULL;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 535000913U;
signed char var_15 = (signed char)-75;
int zero = 0;
unsigned char var_16 = (unsigned char)100;
_Bool var_17 = (_Bool)0;
int var_18 = -2027631791;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
