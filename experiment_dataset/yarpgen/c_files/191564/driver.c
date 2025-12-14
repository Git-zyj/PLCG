#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)181;
long long int var_3 = 8399561198977054783LL;
long long int var_5 = -6006282772187236224LL;
int var_6 = -453814498;
unsigned char var_7 = (unsigned char)16;
int zero = 0;
unsigned long long int var_11 = 13969447097987607756ULL;
signed char var_12 = (signed char)-91;
unsigned int var_13 = 923772150U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
