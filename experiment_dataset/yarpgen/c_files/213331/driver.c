#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)31;
unsigned char var_3 = (unsigned char)115;
unsigned char var_6 = (unsigned char)183;
int zero = 0;
unsigned long long int var_16 = 7683527667346317750ULL;
unsigned long long int var_17 = 8392496229246933317ULL;
unsigned char var_18 = (unsigned char)201;
unsigned char var_19 = (unsigned char)53;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
