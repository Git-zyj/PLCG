#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)56513;
unsigned char var_4 = (unsigned char)205;
unsigned int var_6 = 2836739727U;
unsigned char var_11 = (unsigned char)195;
unsigned long long int var_14 = 15954385796614951793ULL;
int zero = 0;
int var_15 = 574947185;
unsigned long long int var_16 = 13686410275741925592ULL;
short var_17 = (short)23974;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
