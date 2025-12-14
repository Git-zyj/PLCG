#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-75;
unsigned short var_3 = (unsigned short)11127;
long long int var_5 = -8773485185109972418LL;
unsigned int var_6 = 161113778U;
unsigned int var_12 = 3093168472U;
unsigned int var_17 = 1844632048U;
int zero = 0;
signed char var_18 = (signed char)20;
short var_19 = (short)28922;
int var_20 = 193277153;
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
