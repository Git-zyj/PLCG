#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7161781443181422434LL;
unsigned short var_3 = (unsigned short)61856;
signed char var_4 = (signed char)126;
unsigned long long int var_6 = 16770748817097140497ULL;
int zero = 0;
unsigned int var_13 = 967947182U;
signed char var_14 = (signed char)-34;
int var_15 = 1727965557;
unsigned int var_16 = 3169510714U;
int var_17 = -517135363;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
