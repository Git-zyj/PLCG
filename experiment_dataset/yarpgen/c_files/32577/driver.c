#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -17928250;
short var_4 = (short)19591;
unsigned int var_5 = 1899741482U;
unsigned int var_7 = 2318787409U;
unsigned int var_9 = 3712818339U;
unsigned long long int var_10 = 14745108119153990782ULL;
int zero = 0;
unsigned int var_11 = 3114427085U;
signed char var_12 = (signed char)-116;
void init() {
}

void checksum() {
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
