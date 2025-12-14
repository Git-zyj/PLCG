#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)14437;
unsigned short var_5 = (unsigned short)36194;
long long int var_6 = -5131460623753641173LL;
unsigned long long int var_7 = 11059396603664741483ULL;
unsigned int var_8 = 2703627298U;
_Bool var_9 = (_Bool)0;
unsigned short var_11 = (unsigned short)64713;
unsigned short var_12 = (unsigned short)57046;
int var_13 = 35105789;
int zero = 0;
unsigned char var_14 = (unsigned char)97;
unsigned int var_15 = 2552432705U;
unsigned int var_16 = 133362816U;
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
