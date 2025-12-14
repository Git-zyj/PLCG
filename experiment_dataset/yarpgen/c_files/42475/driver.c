#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16632820687905106387ULL;
signed char var_7 = (signed char)-111;
short var_9 = (short)-22846;
unsigned int var_11 = 913493807U;
int zero = 0;
long long int var_14 = 5671796664943525580LL;
signed char var_15 = (signed char)11;
void init() {
}

void checksum() {
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
