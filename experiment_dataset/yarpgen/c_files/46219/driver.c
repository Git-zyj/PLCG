#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-50;
long long int var_2 = 7630823796721885021LL;
unsigned char var_8 = (unsigned char)239;
unsigned long long int var_9 = 10528110083787009182ULL;
short var_16 = (short)7249;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 12331969536355503810ULL;
void init() {
}

void checksum() {
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
