#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7081;
long long int var_7 = -5170298996734469673LL;
unsigned char var_13 = (unsigned char)78;
int zero = 0;
long long int var_15 = -768033054608279475LL;
int var_16 = -1849527649;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
