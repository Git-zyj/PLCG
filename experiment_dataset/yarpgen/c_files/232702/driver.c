#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)37;
unsigned long long int var_7 = 6891571697515894159ULL;
long long int var_8 = -7649637736290188323LL;
unsigned char var_10 = (unsigned char)123;
int zero = 0;
unsigned short var_13 = (unsigned short)57006;
int var_14 = -1004656283;
short var_15 = (short)-27875;
unsigned long long int var_16 = 3701076900188812653ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
