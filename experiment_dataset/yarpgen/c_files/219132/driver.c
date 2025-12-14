#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-10;
unsigned char var_15 = (unsigned char)162;
signed char var_16 = (signed char)-16;
unsigned long long int var_18 = 13959411625012721735ULL;
int zero = 0;
short var_19 = (short)14742;
unsigned short var_20 = (unsigned short)54361;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
