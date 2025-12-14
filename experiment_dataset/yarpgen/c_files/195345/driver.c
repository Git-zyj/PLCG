#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)17;
short var_1 = (short)32582;
unsigned int var_5 = 2077661261U;
unsigned char var_7 = (unsigned char)142;
signed char var_8 = (signed char)25;
int zero = 0;
unsigned int var_10 = 1856858431U;
long long int var_11 = 1719733480834982756LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
