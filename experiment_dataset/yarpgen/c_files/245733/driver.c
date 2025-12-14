#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2032974319;
signed char var_2 = (signed char)53;
int var_6 = 387940259;
signed char var_8 = (signed char)99;
signed char var_12 = (signed char)-50;
signed char var_13 = (signed char)11;
int zero = 0;
signed char var_15 = (signed char)76;
short var_16 = (short)-5760;
int var_17 = 844458595;
signed char var_18 = (signed char)-77;
void init() {
}

void checksum() {
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
