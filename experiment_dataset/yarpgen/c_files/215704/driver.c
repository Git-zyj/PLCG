#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17049;
unsigned long long int var_4 = 3513197457493660243ULL;
unsigned short var_8 = (unsigned short)38774;
int zero = 0;
int var_13 = 77471569;
unsigned int var_14 = 2539919167U;
unsigned char var_15 = (unsigned char)207;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
