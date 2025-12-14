#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -67339906;
unsigned char var_1 = (unsigned char)54;
unsigned char var_7 = (unsigned char)79;
short var_12 = (short)6269;
unsigned long long int var_16 = 9498437989917611750ULL;
int zero = 0;
long long int var_19 = -3446300076997097095LL;
int var_20 = -1563455773;
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
