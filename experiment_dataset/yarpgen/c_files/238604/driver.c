#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2873;
_Bool var_1 = (_Bool)0;
short var_3 = (short)-3831;
short var_7 = (short)-356;
unsigned short var_9 = (unsigned short)30422;
int zero = 0;
unsigned long long int var_10 = 8781044653667174238ULL;
_Bool var_11 = (_Bool)1;
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
