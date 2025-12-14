#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14025380767874719842ULL;
unsigned short var_3 = (unsigned short)23358;
unsigned long long int var_4 = 13036105985782915911ULL;
signed char var_5 = (signed char)88;
unsigned long long int var_6 = 18087331321145882106ULL;
signed char var_9 = (signed char)110;
unsigned long long int var_11 = 14304021360063358912ULL;
int zero = 0;
signed char var_12 = (signed char)-48;
unsigned long long int var_13 = 10301824570719798738ULL;
short var_14 = (short)6116;
unsigned long long int var_15 = 4782850149822974485ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
