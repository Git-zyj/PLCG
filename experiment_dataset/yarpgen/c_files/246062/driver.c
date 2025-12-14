#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 490098614;
unsigned long long int var_10 = 7951698262578244052ULL;
int var_12 = -1240169543;
signed char var_17 = (signed char)-47;
int zero = 0;
unsigned char var_18 = (unsigned char)58;
long long int var_19 = -838936293400625625LL;
void init() {
}

void checksum() {
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
