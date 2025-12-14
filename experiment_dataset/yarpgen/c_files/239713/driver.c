#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4337;
unsigned long long int var_3 = 9172724527281425397ULL;
short var_5 = (short)-17452;
unsigned long long int var_8 = 13330302884281755164ULL;
int zero = 0;
signed char var_10 = (signed char)37;
unsigned short var_11 = (unsigned short)9490;
long long int var_12 = -8281553987434241374LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
