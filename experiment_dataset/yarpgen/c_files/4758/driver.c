#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5501694165435215306LL;
unsigned long long int var_7 = 10130146736540947113ULL;
unsigned int var_13 = 2082196792U;
int zero = 0;
unsigned long long int var_18 = 8632823584272540659ULL;
unsigned long long int var_19 = 8796118968479164388ULL;
unsigned int var_20 = 1534954525U;
void init() {
}

void checksum() {
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
