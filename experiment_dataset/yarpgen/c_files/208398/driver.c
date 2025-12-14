#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2540057230U;
unsigned char var_1 = (unsigned char)233;
unsigned int var_4 = 1384342711U;
unsigned char var_5 = (unsigned char)96;
long long int var_6 = 7772150357798526963LL;
unsigned char var_8 = (unsigned char)236;
int zero = 0;
int var_12 = 209509292;
unsigned char var_13 = (unsigned char)120;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
