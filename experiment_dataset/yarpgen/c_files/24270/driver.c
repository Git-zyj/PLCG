#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -46516758;
signed char var_4 = (signed char)99;
short var_6 = (short)13533;
signed char var_7 = (signed char)109;
unsigned int var_9 = 2568887298U;
int zero = 0;
int var_10 = 1638353642;
long long int var_11 = -3252327949933316560LL;
long long int var_12 = -2803444715610121338LL;
unsigned int var_13 = 310407506U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
