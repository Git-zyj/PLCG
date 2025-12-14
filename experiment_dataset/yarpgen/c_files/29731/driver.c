#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15843;
unsigned long long int var_4 = 9759062928643696031ULL;
unsigned long long int var_9 = 7650460893455630436ULL;
int zero = 0;
signed char var_10 = (signed char)35;
unsigned int var_11 = 926854024U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
