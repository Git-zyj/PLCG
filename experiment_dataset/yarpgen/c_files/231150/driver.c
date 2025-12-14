#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-30551;
long long int var_8 = -5396204005904697750LL;
unsigned int var_9 = 4090201803U;
int zero = 0;
short var_10 = (short)31952;
unsigned char var_11 = (unsigned char)11;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
