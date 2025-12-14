#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)123;
unsigned short var_7 = (unsigned short)15324;
signed char var_10 = (signed char)-24;
unsigned short var_13 = (unsigned short)1991;
short var_14 = (short)23965;
int zero = 0;
unsigned int var_17 = 48473060U;
unsigned char var_18 = (unsigned char)27;
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
