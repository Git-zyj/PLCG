#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36888;
unsigned int var_3 = 2935207294U;
long long int var_8 = -4729865729314273717LL;
unsigned short var_10 = (unsigned short)52493;
int zero = 0;
unsigned short var_13 = (unsigned short)18224;
signed char var_14 = (signed char)-23;
unsigned long long int var_15 = 9718069669020138387ULL;
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
