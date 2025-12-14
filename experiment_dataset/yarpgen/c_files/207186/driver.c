#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11287;
unsigned long long int var_3 = 15984282259769210925ULL;
short var_7 = (short)3762;
short var_9 = (short)10384;
int zero = 0;
int var_10 = -289204699;
unsigned short var_11 = (unsigned short)42119;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
