#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3863640280U;
long long int var_3 = 688729308486562227LL;
unsigned int var_7 = 2324690434U;
unsigned char var_8 = (unsigned char)105;
int zero = 0;
signed char var_12 = (signed char)-83;
unsigned long long int var_13 = 11060791257383152128ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
