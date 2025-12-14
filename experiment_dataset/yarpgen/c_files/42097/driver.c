#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50662;
long long int var_12 = 302696571679709659LL;
unsigned long long int var_14 = 16101631715313359237ULL;
unsigned int var_16 = 3188505875U;
int zero = 0;
unsigned long long int var_20 = 9855900127005833207ULL;
short var_21 = (short)-17447;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
