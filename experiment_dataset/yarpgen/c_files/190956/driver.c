#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)117;
short var_2 = (short)29624;
unsigned char var_3 = (unsigned char)226;
int var_4 = 1898262239;
signed char var_5 = (signed char)-48;
int zero = 0;
short var_12 = (short)-2554;
int var_13 = -1130552226;
unsigned long long int var_14 = 6197673468240214870ULL;
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
