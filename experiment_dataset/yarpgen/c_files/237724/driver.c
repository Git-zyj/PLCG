#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -165788473775593771LL;
unsigned char var_2 = (unsigned char)29;
short var_6 = (short)-32629;
short var_9 = (short)19290;
unsigned long long int var_11 = 4539155412228572912ULL;
int zero = 0;
unsigned int var_12 = 1095553828U;
unsigned short var_13 = (unsigned short)48005;
unsigned int var_14 = 3393157369U;
void init() {
}

void checksum() {
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
