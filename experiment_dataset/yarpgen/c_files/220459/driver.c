#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-24;
unsigned long long int var_5 = 9439767211374001943ULL;
unsigned char var_7 = (unsigned char)28;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 1870746337827950610ULL;
unsigned short var_14 = (unsigned short)6298;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
