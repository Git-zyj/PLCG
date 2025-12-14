#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 3380421624U;
unsigned int var_11 = 3561168330U;
unsigned int var_12 = 2792747000U;
unsigned int var_15 = 3210004103U;
int zero = 0;
unsigned int var_18 = 3238452795U;
unsigned int var_19 = 1565177370U;
unsigned short var_20 = (unsigned short)16088;
unsigned int var_21 = 2856322635U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
