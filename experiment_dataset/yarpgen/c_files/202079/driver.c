#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1602344694;
short var_1 = (short)17660;
unsigned long long int var_4 = 136480597736535276ULL;
int var_6 = -1570655540;
short var_7 = (short)-4838;
int var_8 = 1363738896;
short var_10 = (short)2639;
int var_11 = -1674433581;
int zero = 0;
short var_12 = (short)-503;
short var_13 = (short)6962;
unsigned char var_14 = (unsigned char)24;
short var_15 = (short)17588;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
