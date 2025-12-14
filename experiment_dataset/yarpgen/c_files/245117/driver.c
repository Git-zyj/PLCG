#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7690282097013847640LL;
unsigned int var_4 = 907028190U;
unsigned short var_5 = (unsigned short)62243;
unsigned int var_7 = 2681095570U;
long long int var_10 = 8983070747773792780LL;
unsigned short var_11 = (unsigned short)1394;
long long int var_12 = 2662336711115830731LL;
int zero = 0;
unsigned char var_13 = (unsigned char)224;
long long int var_14 = 1585929528737098893LL;
long long int var_15 = 4397072984255161567LL;
signed char var_16 = (signed char)-48;
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
