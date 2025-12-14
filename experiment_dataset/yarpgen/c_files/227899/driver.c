#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)221;
unsigned int var_5 = 3967825286U;
signed char var_11 = (signed char)-52;
long long int var_13 = -1490890318409708717LL;
signed char var_15 = (signed char)107;
int zero = 0;
int var_20 = 1526364940;
unsigned char var_21 = (unsigned char)84;
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
