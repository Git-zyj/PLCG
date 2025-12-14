#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1530672976;
long long int var_7 = -7218177845014317956LL;
unsigned char var_9 = (unsigned char)73;
int zero = 0;
unsigned int var_10 = 1642870112U;
unsigned char var_11 = (unsigned char)35;
int var_12 = -1412157690;
signed char var_13 = (signed char)-30;
short var_14 = (short)2009;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
