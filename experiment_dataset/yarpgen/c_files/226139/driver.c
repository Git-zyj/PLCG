#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4142587128556610184LL;
unsigned char var_3 = (unsigned char)142;
signed char var_4 = (signed char)-56;
unsigned char var_7 = (unsigned char)189;
unsigned char var_8 = (unsigned char)144;
unsigned long long int var_12 = 1776704314626899732ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)81;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
