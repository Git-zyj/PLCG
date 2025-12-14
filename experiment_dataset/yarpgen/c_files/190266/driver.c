#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)224;
unsigned int var_1 = 1408268135U;
unsigned long long int var_2 = 14230577167745341746ULL;
unsigned char var_3 = (unsigned char)171;
unsigned long long int var_5 = 12412334203851913196ULL;
unsigned int var_7 = 3502024478U;
unsigned long long int var_8 = 13503961041407015203ULL;
short var_9 = (short)-452;
int zero = 0;
short var_13 = (short)28267;
signed char var_14 = (signed char)91;
unsigned int var_15 = 3941618499U;
void init() {
}

void checksum() {
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
