#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4408;
short var_4 = (short)-3787;
short var_5 = (short)-22151;
short var_6 = (short)-16398;
short var_7 = (short)-12275;
int zero = 0;
short var_13 = (short)25689;
short var_14 = (short)-18104;
short var_15 = (short)4659;
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
