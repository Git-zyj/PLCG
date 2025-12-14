#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19146;
signed char var_3 = (signed char)24;
short var_4 = (short)8983;
short var_5 = (short)27201;
int zero = 0;
unsigned short var_10 = (unsigned short)59635;
unsigned short var_11 = (unsigned short)20049;
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
