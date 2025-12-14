#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)22;
signed char var_4 = (signed char)38;
unsigned int var_5 = 1235004813U;
unsigned int var_10 = 2719474080U;
unsigned int var_11 = 3208819902U;
int zero = 0;
unsigned int var_12 = 3065600113U;
short var_13 = (short)5021;
void init() {
}

void checksum() {
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
