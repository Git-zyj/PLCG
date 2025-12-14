#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 293222009U;
_Bool var_4 = (_Bool)0;
long long int var_6 = 5009130009929639536LL;
unsigned int var_8 = 3992338853U;
int var_9 = 960791896;
int var_14 = 2101538588;
int zero = 0;
signed char var_16 = (signed char)-30;
unsigned int var_17 = 1874951857U;
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
