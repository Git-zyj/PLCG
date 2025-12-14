#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19779;
short var_2 = (short)14661;
short var_4 = (short)15608;
short var_5 = (short)-29600;
short var_7 = (short)-15054;
int var_9 = -1111074938;
int var_10 = 634759152;
short var_11 = (short)30656;
short var_12 = (short)-3773;
int zero = 0;
int var_14 = -258643891;
short var_15 = (short)-17831;
int var_16 = -1742663997;
int var_17 = 1269061858;
int var_18 = -506241107;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
