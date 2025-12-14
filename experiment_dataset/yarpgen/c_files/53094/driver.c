#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 178667691;
unsigned int var_1 = 1745730678U;
unsigned int var_2 = 4003505033U;
unsigned char var_3 = (unsigned char)59;
_Bool var_5 = (_Bool)1;
unsigned int var_8 = 1835890776U;
unsigned int var_9 = 2451934660U;
int zero = 0;
signed char var_10 = (signed char)-23;
signed char var_11 = (signed char)-5;
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
