#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3698365427U;
long long int var_2 = -5193797940071744710LL;
int var_4 = 1449645814;
short var_6 = (short)-26746;
int zero = 0;
long long int var_17 = 5479393956181012557LL;
unsigned char var_18 = (unsigned char)215;
void init() {
}

void checksum() {
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
