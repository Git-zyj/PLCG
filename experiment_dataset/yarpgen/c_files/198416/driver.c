#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-65;
unsigned short var_2 = (unsigned short)29562;
short var_3 = (short)-21117;
unsigned short var_7 = (unsigned short)29085;
short var_8 = (short)-25709;
unsigned short var_9 = (unsigned short)9861;
int zero = 0;
unsigned short var_10 = (unsigned short)63603;
signed char var_11 = (signed char)73;
short var_12 = (short)3055;
signed char var_13 = (signed char)76;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
