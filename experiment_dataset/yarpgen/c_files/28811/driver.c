#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 11379599637381929295ULL;
unsigned char var_5 = (unsigned char)81;
int zero = 0;
long long int var_13 = 5913393043301540934LL;
short var_14 = (short)-13880;
unsigned short var_15 = (unsigned short)19461;
unsigned long long int var_16 = 13262119502594620053ULL;
int var_17 = -1697308013;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
