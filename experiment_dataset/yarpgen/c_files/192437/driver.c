#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12210;
unsigned long long int var_3 = 3400735524047606058ULL;
short var_4 = (short)23622;
int var_8 = 16532520;
unsigned long long int var_10 = 10676337173728864422ULL;
short var_13 = (short)31914;
unsigned long long int var_14 = 6259546934026947537ULL;
short var_16 = (short)-22390;
int zero = 0;
unsigned long long int var_17 = 1989943274511174989ULL;
unsigned long long int var_18 = 17047720086131185550ULL;
unsigned char var_19 = (unsigned char)165;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
