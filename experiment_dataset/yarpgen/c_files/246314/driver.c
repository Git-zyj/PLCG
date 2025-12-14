#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)14;
short var_6 = (short)21245;
unsigned char var_7 = (unsigned char)209;
signed char var_9 = (signed char)64;
unsigned char var_11 = (unsigned char)157;
int zero = 0;
long long int var_16 = 54500571372298507LL;
unsigned long long int var_17 = 13565244157899196879ULL;
unsigned char var_18 = (unsigned char)81;
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
