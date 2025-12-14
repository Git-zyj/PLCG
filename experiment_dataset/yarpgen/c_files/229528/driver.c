#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)44655;
unsigned long long int var_5 = 14232383236850742022ULL;
unsigned long long int var_9 = 4704588532786885600ULL;
int zero = 0;
unsigned int var_11 = 439744140U;
unsigned long long int var_12 = 2197461266423672543ULL;
signed char var_13 = (signed char)-117;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
