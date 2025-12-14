#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)38;
unsigned short var_9 = (unsigned short)24809;
short var_11 = (short)-26664;
unsigned char var_12 = (unsigned char)126;
int zero = 0;
signed char var_19 = (signed char)37;
unsigned char var_20 = (unsigned char)113;
long long int var_21 = 4748595545721108101LL;
void init() {
}

void checksum() {
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
