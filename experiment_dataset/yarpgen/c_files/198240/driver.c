#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10869;
long long int var_3 = -6925993394658251899LL;
int var_4 = 563991862;
long long int var_6 = 2771116769626868702LL;
unsigned char var_9 = (unsigned char)239;
short var_11 = (short)31465;
unsigned char var_12 = (unsigned char)43;
int zero = 0;
unsigned int var_18 = 1428187876U;
unsigned short var_19 = (unsigned short)31686;
unsigned int var_20 = 2144636509U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
