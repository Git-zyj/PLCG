#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2881354357U;
short var_4 = (short)495;
signed char var_5 = (signed char)-102;
unsigned char var_9 = (unsigned char)17;
long long int var_12 = 4660192817054115695LL;
short var_16 = (short)-30653;
int zero = 0;
unsigned char var_17 = (unsigned char)59;
short var_18 = (short)12939;
unsigned short var_19 = (unsigned short)2193;
unsigned int var_20 = 1726252084U;
short var_21 = (short)-18852;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
