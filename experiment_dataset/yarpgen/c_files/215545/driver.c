#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4356539708424698007LL;
unsigned short var_5 = (unsigned short)48499;
long long int var_6 = 7939012534063491962LL;
unsigned short var_8 = (unsigned short)18336;
int zero = 0;
signed char var_17 = (signed char)-75;
unsigned char var_18 = (unsigned char)64;
void init() {
}

void checksum() {
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
