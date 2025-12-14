#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)50565;
int var_5 = -186975442;
int var_6 = 1322431006;
signed char var_9 = (signed char)96;
int var_12 = 592996779;
int zero = 0;
unsigned short var_16 = (unsigned short)37831;
int var_17 = 464478521;
void init() {
}

void checksum() {
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
