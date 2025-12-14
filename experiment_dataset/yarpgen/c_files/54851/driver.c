#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)55;
unsigned long long int var_5 = 9026066759505260312ULL;
short var_6 = (short)-17270;
unsigned short var_7 = (unsigned short)53919;
short var_9 = (short)-18392;
int zero = 0;
signed char var_14 = (signed char)84;
short var_15 = (short)25081;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
