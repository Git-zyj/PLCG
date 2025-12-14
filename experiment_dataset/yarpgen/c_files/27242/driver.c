#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)96;
short var_3 = (short)-17225;
unsigned long long int var_4 = 14827367291069286360ULL;
short var_7 = (short)100;
unsigned short var_9 = (unsigned short)28194;
signed char var_12 = (signed char)101;
int zero = 0;
unsigned short var_13 = (unsigned short)54976;
unsigned short var_14 = (unsigned short)47072;
short var_15 = (short)-22462;
signed char var_16 = (signed char)117;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
