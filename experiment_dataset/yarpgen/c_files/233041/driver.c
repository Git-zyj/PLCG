#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)95;
long long int var_2 = 4627180374817092777LL;
short var_4 = (short)16838;
unsigned long long int var_7 = 15967698255176923745ULL;
unsigned int var_11 = 2536646631U;
unsigned char var_13 = (unsigned char)113;
long long int var_15 = 5643741639876152691LL;
int zero = 0;
long long int var_16 = 8103681793717486540LL;
unsigned int var_17 = 2169114574U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
