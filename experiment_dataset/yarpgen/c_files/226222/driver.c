#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)102;
short var_2 = (short)-5792;
int var_3 = 52694855;
short var_4 = (short)10883;
short var_5 = (short)22064;
short var_7 = (short)-10936;
short var_8 = (short)-27797;
short var_10 = (short)32408;
short var_11 = (short)-2762;
short var_12 = (short)6955;
int zero = 0;
int var_13 = 1146891709;
short var_14 = (short)6483;
short var_15 = (short)-10470;
void init() {
}

void checksum() {
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
