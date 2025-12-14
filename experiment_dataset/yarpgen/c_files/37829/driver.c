#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1240866523U;
long long int var_5 = -3708793767015017974LL;
unsigned short var_7 = (unsigned short)25426;
short var_10 = (short)1770;
unsigned short var_11 = (unsigned short)62028;
signed char var_12 = (signed char)-29;
short var_13 = (short)-26432;
int zero = 0;
short var_14 = (short)-6618;
short var_15 = (short)-15289;
unsigned int var_16 = 2943115866U;
void init() {
}

void checksum() {
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
