#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2062132511;
unsigned short var_5 = (unsigned short)20461;
unsigned int var_7 = 1243153391U;
_Bool var_9 = (_Bool)0;
unsigned short var_15 = (unsigned short)3709;
int zero = 0;
unsigned long long int var_16 = 4208150852250485759ULL;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)70;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
