#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)95;
unsigned char var_15 = (unsigned char)184;
unsigned char var_18 = (unsigned char)227;
unsigned long long int var_19 = 17313317540960253316ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)106;
unsigned int var_21 = 1247295786U;
unsigned char var_22 = (unsigned char)30;
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
