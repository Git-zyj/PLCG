#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2026500429U;
signed char var_7 = (signed char)113;
signed char var_9 = (signed char)-124;
int zero = 0;
long long int var_13 = 545505749646094517LL;
short var_14 = (short)29550;
unsigned char var_15 = (unsigned char)107;
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
