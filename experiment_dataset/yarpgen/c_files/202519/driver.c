#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4966156023477672534LL;
unsigned short var_3 = (unsigned short)61836;
int var_4 = -829529531;
unsigned long long int var_6 = 2681147012992533402ULL;
long long int var_7 = 7142972600938717625LL;
signed char var_8 = (signed char)108;
unsigned long long int var_9 = 5486534282041514494ULL;
unsigned short var_11 = (unsigned short)59236;
int zero = 0;
short var_12 = (short)28022;
int var_13 = 1104616164;
void init() {
}

void checksum() {
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
