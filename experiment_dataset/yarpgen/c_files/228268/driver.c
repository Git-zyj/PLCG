#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41713;
unsigned short var_3 = (unsigned short)27123;
unsigned short var_14 = (unsigned short)23237;
int var_15 = 80591924;
unsigned short var_17 = (unsigned short)6398;
unsigned short var_18 = (unsigned short)20275;
int zero = 0;
int var_19 = -1549764300;
int var_20 = -290721474;
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
