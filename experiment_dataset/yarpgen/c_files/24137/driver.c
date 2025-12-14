#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6366791735847774500ULL;
signed char var_3 = (signed char)-10;
int var_4 = -1923173704;
int zero = 0;
unsigned short var_11 = (unsigned short)50946;
unsigned long long int var_12 = 964424767087567130ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
