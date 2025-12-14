#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)26575;
long long int var_4 = -2578859263145764499LL;
unsigned short var_8 = (unsigned short)30132;
unsigned int var_9 = 2146059063U;
long long int var_10 = -6759171398462349352LL;
int zero = 0;
long long int var_11 = 2969624523634141759LL;
short var_12 = (short)-31087;
unsigned char var_13 = (unsigned char)76;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
