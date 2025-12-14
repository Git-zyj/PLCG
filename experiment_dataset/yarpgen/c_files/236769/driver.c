#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-24500;
unsigned int var_4 = 171027228U;
unsigned long long int var_5 = 18297096185673807497ULL;
unsigned long long int var_8 = 3586025483362760453ULL;
int zero = 0;
short var_10 = (short)-12012;
short var_11 = (short)13758;
unsigned long long int var_12 = 8024014000270087819ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
