#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16959998387779095990ULL;
int var_4 = 1944928192;
unsigned int var_5 = 2510912234U;
_Bool var_7 = (_Bool)1;
int var_10 = 1156376503;
int zero = 0;
unsigned long long int var_11 = 8301606032642301077ULL;
unsigned char var_12 = (unsigned char)211;
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
