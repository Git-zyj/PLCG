#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 51889101U;
unsigned char var_2 = (unsigned char)40;
short var_4 = (short)-1650;
signed char var_5 = (signed char)-64;
short var_6 = (short)-13050;
int zero = 0;
long long int var_11 = -3902798040393166347LL;
long long int var_12 = 2220726455947425758LL;
unsigned short var_13 = (unsigned short)46604;
short var_14 = (short)14913;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
