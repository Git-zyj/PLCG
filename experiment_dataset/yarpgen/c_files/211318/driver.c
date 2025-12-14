#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5082;
signed char var_2 = (signed char)16;
unsigned int var_3 = 2707670060U;
int var_5 = -478155489;
signed char var_6 = (signed char)63;
signed char var_11 = (signed char)-14;
short var_13 = (short)-13044;
int zero = 0;
int var_17 = 1696300533;
unsigned int var_18 = 3657148485U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
