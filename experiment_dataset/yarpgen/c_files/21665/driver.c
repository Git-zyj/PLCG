#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23953;
int var_2 = 1719444392;
unsigned short var_5 = (unsigned short)23561;
signed char var_6 = (signed char)-100;
unsigned char var_8 = (unsigned char)76;
int var_11 = -1889916124;
int zero = 0;
unsigned short var_12 = (unsigned short)39673;
unsigned long long int var_13 = 7286707934036333155ULL;
void init() {
}

void checksum() {
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
