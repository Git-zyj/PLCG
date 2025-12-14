#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)169;
unsigned char var_4 = (unsigned char)221;
long long int var_6 = -5548538455478196656LL;
long long int var_13 = -3251409833320147170LL;
int zero = 0;
long long int var_19 = -8677115709930180980LL;
long long int var_20 = 8860422650974440137LL;
void init() {
}

void checksum() {
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
