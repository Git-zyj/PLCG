#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)54;
long long int var_4 = -7115240669558063051LL;
unsigned long long int var_6 = 16295062851816397034ULL;
short var_10 = (short)-26543;
short var_14 = (short)-793;
int var_17 = -463810304;
short var_18 = (short)-16027;
int zero = 0;
short var_19 = (short)-23903;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-6151;
unsigned short var_22 = (unsigned short)14324;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
