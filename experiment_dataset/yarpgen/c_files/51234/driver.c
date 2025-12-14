#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-6328;
long long int var_2 = -7003574681797330263LL;
unsigned short var_10 = (unsigned short)37922;
int zero = 0;
short var_14 = (short)16318;
signed char var_15 = (signed char)-84;
signed char var_16 = (signed char)-80;
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
