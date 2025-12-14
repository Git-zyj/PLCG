#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1426;
unsigned short var_1 = (unsigned short)33436;
unsigned long long int var_9 = 9568120296223888942ULL;
short var_10 = (short)-23000;
unsigned int var_14 = 3648644800U;
long long int var_17 = -7311284033168653982LL;
unsigned char var_18 = (unsigned char)119;
short var_19 = (short)24422;
int zero = 0;
short var_20 = (short)23086;
unsigned long long int var_21 = 7538157167921201469ULL;
void init() {
}

void checksum() {
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
