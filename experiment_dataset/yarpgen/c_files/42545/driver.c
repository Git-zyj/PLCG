#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-24277;
unsigned short var_5 = (unsigned short)61270;
long long int var_7 = -7318618185861523242LL;
unsigned short var_8 = (unsigned short)48336;
signed char var_9 = (signed char)87;
short var_11 = (short)1697;
int zero = 0;
int var_13 = 47180650;
unsigned long long int var_14 = 3820778912091343176ULL;
unsigned char var_15 = (unsigned char)76;
short var_16 = (short)-23057;
unsigned long long int var_17 = 12195178186191505630ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
