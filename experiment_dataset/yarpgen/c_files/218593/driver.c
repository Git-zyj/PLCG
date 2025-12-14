#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)2916;
short var_4 = (short)-25599;
short var_7 = (short)6525;
signed char var_8 = (signed char)45;
unsigned long long int var_9 = 17729588284728449846ULL;
long long int var_10 = -740077178006611530LL;
int zero = 0;
unsigned char var_11 = (unsigned char)243;
unsigned long long int var_12 = 8192662679631047805ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
