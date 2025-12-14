#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -260915100;
unsigned int var_3 = 207329434U;
short var_7 = (short)-30182;
unsigned int var_9 = 3374359907U;
signed char var_10 = (signed char)-72;
short var_11 = (short)28563;
int var_12 = 1626142701;
int zero = 0;
signed char var_13 = (signed char)115;
unsigned long long int var_14 = 13558740859688420569ULL;
unsigned long long int var_15 = 2667158263411888480ULL;
int var_16 = 1751824472;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
