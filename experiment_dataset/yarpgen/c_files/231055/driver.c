#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8375255433386454308LL;
unsigned short var_4 = (unsigned short)29191;
int var_16 = 1136547373;
int zero = 0;
signed char var_17 = (signed char)-61;
unsigned char var_18 = (unsigned char)231;
signed char var_19 = (signed char)56;
int var_20 = -1959512263;
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
