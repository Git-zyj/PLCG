#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
signed char var_8 = (signed char)34;
unsigned short var_9 = (unsigned short)20568;
int var_11 = -1427137548;
signed char var_13 = (signed char)-49;
int zero = 0;
short var_15 = (short)1992;
int var_16 = -91566561;
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
