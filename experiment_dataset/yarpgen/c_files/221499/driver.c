#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 2378121363195718126LL;
short var_7 = (short)28532;
long long int var_8 = -1726397366982811522LL;
short var_11 = (short)-24569;
unsigned int var_12 = 781425744U;
int var_16 = -1344790068;
int zero = 0;
unsigned char var_17 = (unsigned char)158;
signed char var_18 = (signed char)-49;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
