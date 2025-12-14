#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-15990;
long long int var_7 = -8052999684262114561LL;
unsigned char var_8 = (unsigned char)62;
unsigned long long int var_10 = 1361413406269548520ULL;
long long int var_13 = -2497360860530176038LL;
short var_14 = (short)3284;
int zero = 0;
int var_16 = 1148508154;
short var_17 = (short)-20799;
int var_18 = 223392214;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
