#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25679;
int var_4 = -1219112668;
unsigned short var_6 = (unsigned short)12164;
int var_7 = 1695551404;
unsigned int var_15 = 1719297062U;
unsigned long long int var_19 = 13040564517687163574ULL;
int zero = 0;
int var_20 = 660463743;
short var_21 = (short)29023;
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
