#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5407747268918530009LL;
unsigned short var_6 = (unsigned short)6017;
unsigned long long int var_7 = 2474649699949717523ULL;
long long int var_13 = 8549885831930818196LL;
int zero = 0;
int var_15 = -76491977;
short var_16 = (short)6652;
void init() {
}

void checksum() {
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
