#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 2455561457355967328ULL;
signed char var_8 = (signed char)113;
short var_9 = (short)-9578;
unsigned short var_11 = (unsigned short)55614;
int zero = 0;
unsigned char var_12 = (unsigned char)12;
signed char var_13 = (signed char)121;
unsigned int var_14 = 3385173785U;
long long int var_15 = 5622459519764802416LL;
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
