#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -20976376;
unsigned short var_9 = (unsigned short)40643;
signed char var_16 = (signed char)-79;
unsigned short var_18 = (unsigned short)57902;
unsigned int var_19 = 222854075U;
int zero = 0;
long long int var_20 = 1420172797314311098LL;
short var_21 = (short)29687;
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
