#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)173;
signed char var_10 = (signed char)81;
unsigned int var_13 = 3707063433U;
int zero = 0;
long long int var_15 = -4004872509841193573LL;
unsigned short var_16 = (unsigned short)52626;
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
