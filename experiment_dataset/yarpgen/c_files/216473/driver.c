#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)23;
short var_4 = (short)-28397;
long long int var_5 = -1773124460496152181LL;
unsigned int var_7 = 2198680384U;
long long int var_9 = 7348893625226190384LL;
unsigned int var_13 = 1838915391U;
int zero = 0;
unsigned int var_14 = 1664713828U;
signed char var_15 = (signed char)-3;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
