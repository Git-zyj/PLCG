#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)51196;
unsigned int var_8 = 30179252U;
unsigned short var_12 = (unsigned short)47337;
unsigned int var_14 = 695969863U;
unsigned short var_15 = (unsigned short)39948;
unsigned short var_16 = (unsigned short)18433;
int zero = 0;
unsigned short var_17 = (unsigned short)10856;
unsigned short var_18 = (unsigned short)36566;
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
