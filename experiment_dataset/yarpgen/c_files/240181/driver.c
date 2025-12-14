#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13587559601155661714ULL;
unsigned short var_6 = (unsigned short)19881;
long long int var_7 = 8017937710350831943LL;
unsigned short var_14 = (unsigned short)6825;
unsigned short var_16 = (unsigned short)437;
int zero = 0;
signed char var_18 = (signed char)-54;
int var_19 = 1199338686;
void init() {
}

void checksum() {
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
