#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4946;
short var_1 = (short)-2306;
unsigned int var_2 = 418958945U;
unsigned long long int var_3 = 13294352830582209468ULL;
unsigned short var_6 = (unsigned short)30024;
signed char var_7 = (signed char)56;
unsigned int var_9 = 3505932666U;
int zero = 0;
int var_10 = -815241268;
short var_11 = (short)8632;
short var_12 = (short)-10245;
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
