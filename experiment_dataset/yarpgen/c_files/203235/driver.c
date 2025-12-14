#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 108260607;
short var_3 = (short)-1769;
signed char var_5 = (signed char)88;
unsigned short var_9 = (unsigned short)37431;
long long int var_15 = 7306138398013664095LL;
int zero = 0;
unsigned short var_16 = (unsigned short)32650;
unsigned char var_17 = (unsigned char)54;
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
