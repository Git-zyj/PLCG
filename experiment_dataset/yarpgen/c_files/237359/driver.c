#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)23043;
short var_5 = (short)-18946;
signed char var_8 = (signed char)67;
long long int var_9 = 412229304484257362LL;
unsigned int var_11 = 2634280529U;
int var_13 = 1982213268;
int var_15 = 1875419248;
int zero = 0;
unsigned long long int var_18 = 15620375021701425341ULL;
unsigned long long int var_19 = 18082943718397758744ULL;
unsigned long long int var_20 = 13452363415162169536ULL;
short var_21 = (short)-18410;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
