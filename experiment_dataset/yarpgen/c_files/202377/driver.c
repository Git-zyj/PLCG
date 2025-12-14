#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5591500714203128487LL;
int var_2 = -613875953;
unsigned char var_10 = (unsigned char)13;
unsigned char var_12 = (unsigned char)178;
unsigned short var_13 = (unsigned short)11063;
signed char var_15 = (signed char)-110;
unsigned char var_16 = (unsigned char)249;
int zero = 0;
unsigned long long int var_18 = 752843381088837844ULL;
short var_19 = (short)29950;
int var_20 = -2036340549;
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
