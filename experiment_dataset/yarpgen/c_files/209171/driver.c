#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8782171633575359194LL;
unsigned char var_7 = (unsigned char)61;
short var_11 = (short)-4611;
int zero = 0;
short var_12 = (short)17236;
short var_13 = (short)5938;
unsigned int var_14 = 3142311367U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
