#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2576203646U;
unsigned char var_4 = (unsigned char)11;
long long int var_5 = -7483473101095249972LL;
unsigned long long int var_8 = 5206602337730707621ULL;
int zero = 0;
unsigned int var_10 = 3595204462U;
int var_11 = 567129350;
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
