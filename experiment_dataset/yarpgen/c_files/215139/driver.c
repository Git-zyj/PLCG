#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1644430463;
signed char var_7 = (signed char)124;
unsigned short var_8 = (unsigned short)3779;
unsigned long long int var_9 = 690009207612170054ULL;
signed char var_10 = (signed char)63;
long long int var_12 = 7249218094071612664LL;
short var_13 = (short)-24083;
unsigned char var_14 = (unsigned char)87;
int zero = 0;
int var_16 = -1132690706;
unsigned char var_17 = (unsigned char)91;
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
