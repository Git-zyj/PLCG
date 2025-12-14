#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15291;
int var_3 = 2070250383;
unsigned long long int var_8 = 16763415260540161449ULL;
int zero = 0;
int var_15 = 1214078640;
unsigned long long int var_16 = 2939046813559922617ULL;
short var_17 = (short)2972;
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
