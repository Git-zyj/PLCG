#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_11 = 2190329684U;
long long int var_12 = 1402863116271764404LL;
unsigned long long int var_13 = 1697356665485438114ULL;
short var_14 = (short)18487;
int zero = 0;
unsigned int var_19 = 280240315U;
int var_20 = 1076611686;
signed char var_21 = (signed char)12;
void init() {
}

void checksum() {
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
