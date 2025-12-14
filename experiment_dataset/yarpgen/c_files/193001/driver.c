#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 6214718781423325912LL;
unsigned int var_6 = 2846407570U;
int zero = 0;
short var_12 = (short)3735;
short var_13 = (short)-24976;
unsigned char var_14 = (unsigned char)133;
int var_15 = 2120733042;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
