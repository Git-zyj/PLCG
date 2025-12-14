#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-84;
unsigned short var_5 = (unsigned short)45159;
long long int var_7 = 8961740899853437425LL;
signed char var_10 = (signed char)-93;
unsigned char var_11 = (unsigned char)24;
int zero = 0;
short var_14 = (short)7655;
short var_15 = (short)-14338;
int var_16 = 694249015;
unsigned char var_17 = (unsigned char)121;
void init() {
}

void checksum() {
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
