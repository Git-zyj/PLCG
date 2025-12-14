#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1794011283;
unsigned char var_4 = (unsigned char)61;
int var_9 = 588328230;
unsigned char var_10 = (unsigned char)156;
long long int var_11 = 7851567441921350003LL;
signed char var_13 = (signed char)113;
unsigned int var_15 = 2479428714U;
int zero = 0;
unsigned int var_17 = 3992187575U;
int var_18 = 427579761;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
