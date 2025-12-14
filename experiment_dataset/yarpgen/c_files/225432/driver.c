#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33033;
unsigned short var_2 = (unsigned short)31516;
signed char var_3 = (signed char)90;
unsigned long long int var_12 = 14066798415016734113ULL;
int zero = 0;
signed char var_14 = (signed char)-99;
unsigned long long int var_15 = 5784070506849680189ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
