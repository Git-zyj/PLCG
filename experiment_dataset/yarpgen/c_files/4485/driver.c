#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16777392837530710163ULL;
unsigned int var_7 = 713773320U;
unsigned int var_11 = 472639902U;
signed char var_12 = (signed char)106;
signed char var_15 = (signed char)83;
unsigned short var_18 = (unsigned short)15678;
int zero = 0;
unsigned int var_20 = 4168481666U;
unsigned int var_21 = 3616661538U;
unsigned int var_22 = 2022337979U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
