#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned int var_4 = 360646183U;
unsigned short var_9 = (unsigned short)9711;
unsigned char var_10 = (unsigned char)245;
int zero = 0;
short var_17 = (short)100;
unsigned int var_18 = 281418742U;
int var_19 = -2025842766;
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
