#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2100801478U;
int var_4 = -1982972923;
unsigned long long int var_6 = 9697428712465835690ULL;
unsigned int var_15 = 3725828938U;
int zero = 0;
unsigned short var_17 = (unsigned short)14265;
signed char var_18 = (signed char)3;
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
