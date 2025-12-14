#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50172;
long long int var_1 = -3683323879396571475LL;
unsigned int var_2 = 2077320511U;
short var_5 = (short)-30517;
signed char var_9 = (signed char)-6;
unsigned char var_12 = (unsigned char)80;
unsigned long long int var_15 = 12406136333336592446ULL;
short var_16 = (short)-21586;
int zero = 0;
short var_17 = (short)-31892;
unsigned short var_18 = (unsigned short)29274;
short var_19 = (short)28123;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
