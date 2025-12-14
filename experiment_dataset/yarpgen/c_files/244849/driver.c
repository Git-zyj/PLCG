#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1951919096732678366LL;
unsigned long long int var_6 = 12696746067056779638ULL;
int var_8 = 373080563;
int var_9 = -483524165;
int zero = 0;
unsigned short var_10 = (unsigned short)36125;
unsigned char var_11 = (unsigned char)123;
_Bool var_12 = (_Bool)1;
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
