#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)14655;
unsigned long long int var_5 = 9759770880195662142ULL;
unsigned char var_6 = (unsigned char)232;
unsigned char var_8 = (unsigned char)65;
int zero = 0;
signed char var_10 = (signed char)65;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)194;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
