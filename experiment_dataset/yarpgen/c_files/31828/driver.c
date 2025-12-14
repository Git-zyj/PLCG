#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7939202560937620108ULL;
unsigned int var_1 = 3655808835U;
signed char var_4 = (signed char)95;
long long int var_7 = 8222903349112182201LL;
int var_9 = 533124077;
int zero = 0;
int var_15 = -128960307;
short var_16 = (short)12804;
unsigned long long int var_17 = 9999623719765936014ULL;
void init() {
}

void checksum() {
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
