#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5107384420651181700LL;
short var_6 = (short)-23678;
signed char var_11 = (signed char)21;
unsigned short var_17 = (unsigned short)45995;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = 7732988074258835789LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
