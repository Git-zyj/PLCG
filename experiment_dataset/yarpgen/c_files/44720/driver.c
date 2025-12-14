#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)58;
unsigned char var_3 = (unsigned char)129;
unsigned long long int var_10 = 16186084087125273873ULL;
signed char var_13 = (signed char)-75;
signed char var_14 = (signed char)9;
int zero = 0;
unsigned char var_15 = (unsigned char)207;
signed char var_16 = (signed char)-107;
unsigned long long int var_17 = 6824978190693768613ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
