#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8899008558977447286ULL;
short var_10 = (short)-26146;
short var_12 = (short)-27366;
int zero = 0;
unsigned long long int var_14 = 8557249379507508483ULL;
unsigned short var_15 = (unsigned short)39020;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
