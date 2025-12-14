#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16351;
int var_3 = -699002296;
short var_9 = (short)-10715;
int zero = 0;
unsigned long long int var_10 = 18260097249131781898ULL;
unsigned short var_11 = (unsigned short)45014;
unsigned short var_12 = (unsigned short)3976;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
