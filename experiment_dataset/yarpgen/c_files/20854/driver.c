#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2959092742U;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)106;
signed char var_10 = (signed char)127;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)107;
unsigned char var_13 = (unsigned char)178;
unsigned char var_14 = (unsigned char)107;
unsigned char var_15 = (unsigned char)19;
int var_16 = -2108654422;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
