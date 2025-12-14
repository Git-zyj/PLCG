#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3958699128U;
unsigned int var_3 = 3793788945U;
short var_8 = (short)30632;
unsigned char var_15 = (unsigned char)132;
unsigned char var_16 = (unsigned char)228;
int zero = 0;
short var_19 = (short)16509;
unsigned int var_20 = 2302610036U;
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
