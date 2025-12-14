#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 951175228;
long long int var_1 = 3357147687208644937LL;
signed char var_3 = (signed char)106;
signed char var_5 = (signed char)100;
short var_7 = (short)-20716;
int var_8 = 321434154;
int var_10 = -659705315;
signed char var_14 = (signed char)-64;
int zero = 0;
unsigned long long int var_18 = 1863857732789521543ULL;
unsigned short var_19 = (unsigned short)45619;
unsigned int var_20 = 2445669311U;
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
