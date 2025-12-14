#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)52770;
unsigned int var_12 = 1279572681U;
unsigned char var_13 = (unsigned char)212;
unsigned long long int var_15 = 3241156708364405773ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)193;
int var_17 = 2032610628;
unsigned long long int var_18 = 8962578079244503900ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
