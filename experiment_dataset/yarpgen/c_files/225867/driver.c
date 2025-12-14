#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1478688682;
unsigned char var_3 = (unsigned char)30;
signed char var_4 = (signed char)27;
long long int var_6 = -2154648217009356068LL;
unsigned int var_9 = 893068870U;
int zero = 0;
long long int var_10 = 9198645280506726748LL;
int var_11 = -972799516;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
