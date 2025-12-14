#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27313;
short var_3 = (short)5816;
signed char var_4 = (signed char)56;
unsigned int var_10 = 3362384296U;
long long int var_13 = 389518823977222227LL;
signed char var_14 = (signed char)22;
int zero = 0;
short var_15 = (short)-7968;
unsigned char var_16 = (unsigned char)24;
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
