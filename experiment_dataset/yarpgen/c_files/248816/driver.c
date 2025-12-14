#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2757;
long long int var_2 = -6664102691509690549LL;
unsigned int var_4 = 516447987U;
unsigned short var_5 = (unsigned short)46260;
unsigned int var_7 = 3315927759U;
long long int var_8 = 7236648805508197455LL;
int var_9 = 1140930498;
unsigned long long int var_10 = 5043115462198447354ULL;
unsigned char var_12 = (unsigned char)84;
int var_13 = -915114911;
signed char var_15 = (signed char)89;
unsigned short var_16 = (unsigned short)53539;
int zero = 0;
int var_17 = -314131521;
unsigned int var_18 = 3262324364U;
unsigned char var_19 = (unsigned char)236;
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
