#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3099485944U;
unsigned int var_4 = 768754690U;
signed char var_6 = (signed char)75;
unsigned int var_9 = 2917339644U;
unsigned char var_14 = (unsigned char)134;
short var_15 = (short)-27348;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)113;
int zero = 0;
short var_19 = (short)-17122;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
