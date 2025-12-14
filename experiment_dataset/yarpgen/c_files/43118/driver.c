#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)46;
unsigned short var_2 = (unsigned short)57058;
int var_4 = 1471314914;
unsigned short var_5 = (unsigned short)54256;
unsigned char var_6 = (unsigned char)211;
unsigned int var_7 = 486279965U;
long long int var_8 = 7654609256127603421LL;
int zero = 0;
unsigned short var_10 = (unsigned short)3982;
signed char var_11 = (signed char)95;
long long int var_12 = -1888591620099249926LL;
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
