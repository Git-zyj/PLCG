#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2805184902755589410ULL;
unsigned short var_6 = (unsigned short)17147;
_Bool var_12 = (_Bool)0;
signed char var_14 = (signed char)-93;
unsigned int var_17 = 205068321U;
int zero = 0;
unsigned short var_20 = (unsigned short)61727;
int var_21 = 1552016565;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
