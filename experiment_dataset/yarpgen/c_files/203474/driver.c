#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8854183809665083158LL;
unsigned char var_2 = (unsigned char)215;
signed char var_6 = (signed char)124;
unsigned long long int var_7 = 736091164081136029ULL;
unsigned char var_8 = (unsigned char)91;
signed char var_14 = (signed char)-66;
int zero = 0;
int var_15 = -1931236991;
long long int var_16 = -2821032458278772100LL;
long long int var_17 = 6347318974103760692LL;
unsigned long long int var_18 = 4669300963446886406ULL;
unsigned char var_19 = (unsigned char)8;
int var_20 = -642577838;
unsigned int var_21 = 3510290809U;
unsigned char var_22 = (unsigned char)102;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
