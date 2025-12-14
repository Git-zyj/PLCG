#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1165833500;
unsigned int var_4 = 3745271444U;
unsigned int var_5 = 2165715320U;
int var_6 = 264034480;
unsigned int var_7 = 1366466868U;
int zero = 0;
unsigned short var_10 = (unsigned short)41202;
unsigned int var_11 = 3724257264U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
