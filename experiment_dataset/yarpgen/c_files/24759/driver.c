#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1603885750597596994LL;
unsigned int var_8 = 954413700U;
unsigned char var_9 = (unsigned char)131;
unsigned char var_15 = (unsigned char)126;
int zero = 0;
short var_16 = (short)-20759;
int var_17 = -1048127514;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
