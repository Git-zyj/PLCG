#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -69672546311814447LL;
unsigned char var_12 = (unsigned char)93;
int var_13 = -590229951;
unsigned long long int var_15 = 18191176046679946254ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)193;
int var_18 = -1169484081;
signed char var_19 = (signed char)-53;
int var_20 = 1257175405;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
