#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2061273236667201236LL;
signed char var_2 = (signed char)101;
signed char var_7 = (signed char)31;
signed char var_9 = (signed char)68;
int zero = 0;
unsigned int var_10 = 4083795562U;
long long int var_11 = -2984394416838410955LL;
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
