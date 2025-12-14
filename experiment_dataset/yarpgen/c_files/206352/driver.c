#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19730;
short var_1 = (short)-8164;
short var_3 = (short)27453;
short var_4 = (short)-22836;
short var_5 = (short)-14852;
short var_6 = (short)-23926;
short var_8 = (short)6514;
short var_10 = (short)-32642;
short var_11 = (short)-16865;
short var_12 = (short)-31956;
short var_13 = (short)-23387;
short var_14 = (short)4039;
short var_16 = (short)27084;
short var_17 = (short)30875;
int zero = 0;
short var_18 = (short)26747;
short var_19 = (short)-18369;
short var_20 = (short)-29462;
short var_21 = (short)371;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
