#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2064689672;
int var_2 = -492897732;
unsigned char var_3 = (unsigned char)119;
_Bool var_4 = (_Bool)0;
unsigned short var_12 = (unsigned short)23024;
unsigned long long int var_13 = 11305784040002050286ULL;
int zero = 0;
short var_14 = (short)6803;
signed char var_15 = (signed char)121;
long long int var_16 = 5702103606991836887LL;
void init() {
}

void checksum() {
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
