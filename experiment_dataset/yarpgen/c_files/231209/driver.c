#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_3 = 1296936106;
unsigned short var_6 = (unsigned short)62254;
short var_8 = (short)23220;
int var_9 = 1589385379;
unsigned short var_10 = (unsigned short)61576;
int zero = 0;
long long int var_11 = 221238441813930LL;
short var_12 = (short)-17381;
signed char var_13 = (signed char)-54;
unsigned char var_14 = (unsigned char)186;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
