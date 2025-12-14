#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3632;
short var_5 = (short)10596;
short var_9 = (short)-18201;
short var_10 = (short)-13781;
short var_12 = (short)23416;
unsigned short var_14 = (unsigned short)17617;
unsigned short var_18 = (unsigned short)19551;
int zero = 0;
unsigned short var_20 = (unsigned short)4937;
unsigned short var_21 = (unsigned short)2862;
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
