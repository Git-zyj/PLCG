#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15298618494642268582ULL;
int var_2 = 1842741697;
unsigned char var_5 = (unsigned char)14;
unsigned short var_7 = (unsigned short)33715;
int zero = 0;
unsigned short var_19 = (unsigned short)43577;
signed char var_20 = (signed char)41;
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
