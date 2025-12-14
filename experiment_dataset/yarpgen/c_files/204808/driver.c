#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4146467724U;
int var_10 = -1857491975;
long long int var_13 = 2377843313650867091LL;
short var_16 = (short)16270;
int zero = 0;
signed char var_19 = (signed char)-8;
signed char var_20 = (signed char)-127;
unsigned char var_21 = (unsigned char)70;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
