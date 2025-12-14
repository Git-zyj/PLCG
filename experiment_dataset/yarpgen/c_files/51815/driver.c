#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 5736090627556275595LL;
int var_12 = 1965311646;
unsigned int var_14 = 1706075482U;
int zero = 0;
short var_16 = (short)-29327;
long long int var_17 = 7432248920361929971LL;
unsigned long long int var_18 = 7841945568430256719ULL;
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
