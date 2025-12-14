#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1380051443U;
long long int var_9 = 1282264814308033669LL;
int zero = 0;
unsigned char var_14 = (unsigned char)168;
unsigned long long int var_15 = 1753042395215657842ULL;
unsigned char var_16 = (unsigned char)191;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
