#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7119094061644410983LL;
long long int var_2 = -2238089456510192970LL;
unsigned char var_3 = (unsigned char)239;
signed char var_6 = (signed char)63;
unsigned long long int var_7 = 6489314990183855272ULL;
unsigned long long int var_8 = 12908303008731330253ULL;
long long int var_9 = -3606964387123008898LL;
unsigned long long int var_10 = 2876228816903464364ULL;
int zero = 0;
signed char var_11 = (signed char)116;
unsigned int var_12 = 1489556574U;
long long int var_13 = 7373499838892385023LL;
signed char var_14 = (signed char)-66;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
