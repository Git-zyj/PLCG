#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16629498325617002415ULL;
unsigned char var_5 = (unsigned char)36;
unsigned long long int var_10 = 5079720990714075602ULL;
unsigned short var_12 = (unsigned short)35031;
short var_13 = (short)-9542;
unsigned short var_14 = (unsigned short)27683;
int zero = 0;
unsigned short var_16 = (unsigned short)65264;
_Bool var_17 = (_Bool)1;
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
