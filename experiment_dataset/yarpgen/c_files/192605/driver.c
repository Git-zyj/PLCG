#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 701783613168346705LL;
long long int var_2 = 2740811461530107855LL;
unsigned char var_3 = (unsigned char)51;
unsigned short var_4 = (unsigned short)64346;
int zero = 0;
unsigned char var_12 = (unsigned char)233;
unsigned short var_13 = (unsigned short)66;
unsigned int var_14 = 1969395776U;
unsigned int var_15 = 3596289732U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
