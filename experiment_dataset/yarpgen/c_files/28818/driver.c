#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4201398817777219359ULL;
int var_3 = -494011719;
unsigned char var_5 = (unsigned char)75;
signed char var_7 = (signed char)105;
_Bool var_8 = (_Bool)1;
unsigned char var_11 = (unsigned char)218;
int zero = 0;
unsigned int var_15 = 3599274774U;
unsigned int var_16 = 2830125764U;
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
