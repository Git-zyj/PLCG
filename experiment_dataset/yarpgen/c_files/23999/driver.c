#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1281825913U;
short var_6 = (short)-17378;
unsigned short var_8 = (unsigned short)26720;
short var_9 = (short)2905;
int zero = 0;
unsigned long long int var_10 = 10583226932668642324ULL;
signed char var_11 = (signed char)-57;
signed char var_12 = (signed char)-91;
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
