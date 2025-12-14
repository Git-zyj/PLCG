#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1279052333U;
unsigned int var_3 = 7935163U;
unsigned short var_9 = (unsigned short)38868;
unsigned long long int var_17 = 2607182723212414321ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)176;
unsigned int var_21 = 4088812808U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
