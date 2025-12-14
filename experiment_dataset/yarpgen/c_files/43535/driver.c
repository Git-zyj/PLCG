#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29955;
long long int var_2 = -133721663356988415LL;
int var_3 = -936122495;
long long int var_4 = -1861304035137760069LL;
unsigned char var_5 = (unsigned char)176;
long long int var_11 = -7397277876882174150LL;
int zero = 0;
unsigned int var_12 = 3327663338U;
unsigned int var_13 = 1090204512U;
signed char var_14 = (signed char)18;
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
