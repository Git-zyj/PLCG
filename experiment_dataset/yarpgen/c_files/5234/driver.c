#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2123710207;
unsigned int var_6 = 3702729598U;
unsigned short var_9 = (unsigned short)27179;
unsigned int var_11 = 4116143330U;
int zero = 0;
unsigned short var_19 = (unsigned short)30571;
unsigned long long int var_20 = 16982068098228688349ULL;
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
